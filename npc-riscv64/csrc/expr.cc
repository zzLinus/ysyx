#include "infrastructure.h"
#include <regex.h>

enum
{
    TK_NOTYPE = 256,
    TK_EQ,

    /* TODO: Add more token types */
    TK_NUM,
    TK_HEX,
    TK_REG,
};

static struct rule
{
    const char *regex;
    int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */

    { " +", TK_NOTYPE },              // spaces
    { "\\+", '+' },                   // plus
    { "\\-", '-' },                   // sub
    { "\\*", '*' },                   // mult
    { "\\/", '/' },                   // mult
    { "\\(", '(' },                   // left breck
    { "\\)", ')' },                   // right breck
    { "==", TK_EQ },                  // equal
    { "0[xX][0-9a-fA-F]+", TK_HEX },  // number
    { "[0-9]+", TK_NUM },             // number
    { "\\$[$a-zA-Z0-9]+", TK_REG },   // number
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

bool check_parentheses(int p, int q);
uint64_t eval(int p, int q);
uint64_t get_opt(int p, int q);
int64_t eval_reg(char *str);
void eval_deref(void);
void clear_tokens(void);

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex()
{
    int i;
    char error_msg[128];
    int ret;

    for (i = 0; i < NR_REGEX; i++)
    {
        /* regcomp() is used to compile a regular expression into a form that is suitable for subsequent regexec() searches.
         */
        ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
        if (ret != 0)
        {
            regerror(ret, &re[i], error_msg, 128);
            printf("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
        }
    }
}

typedef struct token
{
    int type;
    char str[64];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used)) = 0;

static bool make_token(char *e)
{
    int position = 0;
    int i;
    regmatch_t pmatch;
    nr_token = 0;

    while (e[position] != '\0')
    {  // iterate every possible substring
        /* Try all rules one by one. */
        bool new_token = false;
        for (i = 0; i < NR_REGEX; i++)
        {
            if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0)
            {
                char *substr_start = e + position;
                int substr_len = pmatch.rm_eo;

                printf("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
                    i,
                    rules[i].regex,
                    position,
                    substr_len,
                    substr_len,
                    substr_start);

                position += substr_len;

                /* TODO: Now a new token is recognized with rules[i]. Add codes
                 * to record the token in the array `tokens'. For certain types
                 * of tokens, some extra actions should be performed.
                 */

                new_token = 1;
                switch (rules[i].token_type)
                {
                    case TK_EQ: break;
                    case TK_NUM:
                        tokens[nr_token].type = TK_NUM;
                        strncpy(tokens[nr_token++].str, substr_start, substr_len);
                        break;
                    case TK_NOTYPE: break;
                    case '+':
                        tokens[nr_token].type = '+';
                        strcpy(tokens[nr_token++].str, "");
                        break;
                    case '-':
                        tokens[nr_token].type = '-';
                        strcpy(tokens[nr_token++].str, "");
                        break;
                    case '*':
                        tokens[nr_token].type = '*';
                        strcpy(tokens[nr_token++].str, "");
                        break;
                    case '/':
                        tokens[nr_token].type = '/';
                        strcpy(tokens[nr_token++].str, "");
                        break;
                    case '(':
                        tokens[nr_token].type = '(';
                        strcpy(tokens[nr_token++].str, "");
                        break;
                    case TK_REG:
                        tokens[nr_token].type = TK_REG;
                        // remove the '$' sign
                        strncpy(tokens[nr_token++].str, substr_start + 1, substr_len - 1);
                        break;
                    case TK_HEX:
                        tokens[nr_token].type = TK_HEX;
                        strncpy(tokens[nr_token++].str, substr_start, substr_len);
                        break;
                    case ')':
                        tokens[nr_token].type = ')';
                        strcpy(tokens[nr_token++].str, "");
                        break;
                    default: TODO();
                }

                break;
            }
        }

        if (!new_token)
        {
            position++;
        }
    }

    return true;
}

uint64_t expr(char *e, bool *success)
{
    if (!make_token(e))
    {
        *success = false;
        return 0;
    }

    for (int i = 0; i < nr_token; i++)
    {
        if (tokens[i].type == TK_REG)
        {
            eval_reg(tokens[i].str);
            tokens[i].type = TK_NUM;
        }
    }
    eval_deref();

    uint64_t res = eval(0, nr_token - 1);

    printf("result : %lu\n", res);

    *success = true;
    nr_token = 0;
    return 0;
}

uint64_t eval(int p, int q)
{
    if (p > q)
    {
        /* Bad expression */
    }
    else if (p == q)
    {
        uint32_t tmp = atoi(tokens[p].str);
        return tmp;
    }
    else if (check_parentheses(p, q) == true)
    {
        /* The expression is surrounded by a matched pair of parentheses.
         * If that is the case, just throw away the parentheses.
         */
        return eval(p + 1, q - 1);
    }
    else
    {
        uint64_t op = get_opt(p, q);
        printf("op is %lu\n", op);
        uint64_t val1 = eval(p, op - 1);
        uint64_t val2 = eval(op + 1, q);

        switch (tokens[op].type)
        {
            case '+': return val1 + val2;
            case '-': return val1 - val2;
            case '*': return val1 * val2;
            case '/': return val1 / val2;
            default: assert(0);
        }
    }
    return -1;
}

bool check_parentheses(int p, int q)
{
    int arr[32] = { 0 };
    int count = 0, sum = 0;
    for (int i = p; i <= q; i++)
    {
        if (tokens[i].type == '(')
            arr[count++] = 1;
        else if (tokens[i].type == ')')
            arr[count++] = -1;
    }
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    if (sum != 0)
    {
        printf("Bad expression");
        return false;
    }
    if (tokens[p].type == '(' && tokens[q].type == ')')
    {
        sum = 0;
        for (int i = 0; i < count; i++)
        {
            sum += arr[i];
            if (sum == 0 && i != count - 1)
                return false;
        }
        return true;
    }
    else
        return false;
    return false;
}

int64_t eval_reg(char *str)
{
    bool success = false;
    char num[64];
    uint64_t tmp = reg_str2val(str, &success);
    if (!success)
        return -1;
    sprintf(num, "%lu", tmp);
    strcpy(str, num);
    return tmp;
}

void eval_deref(void)
{
    for (int i = 0; i < nr_token; i++)
    {
        if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != TK_NUM && tokens[i - 1].type != ')')))
        {
            uint64_t tmp;
            char num[32];
            tokens[i].type = TK_NUM;
            tmp = strtol(tokens[i + 1].str, NULL, 16);  // turn hex string to int
            //tmp = paddr_read(tmp, 8);                   // value in the memory location
            sprintf(num, "%lu", tmp);
            strcpy(tokens[i].str, num);
            tokens[i + 1].type = TK_NOTYPE;
            strcpy(tokens[i + 1].str, "");
            for (int j = i + 1; j < nr_token; j++)
            {
                tokens[j].type = tokens[j + 1].type;
                strcpy(tokens[j].str, tokens[j + 1].str);
            }
            nr_token--;
        }
    }
}

uint64_t get_opt(int p, int q)
{
    bool stop = false;
    uint64_t res = -1, pri = 1;
    for (int i = p; i <= q; i++)
    {
        if (tokens[i].type == '(')
            stop = true;
        else if (tokens[i].type == ')')
            stop = false;
        if (!stop)
        {
            switch (tokens[i].type)
            {
                case '*':
                    if (pri == 1)
                        res = i;
                    break;
                case '/':
                    if (pri == 1)
                        res = i;
                    break;
                case '+':
                    pri = 2;
                    res = i;
                    break;
                case '-':
                    pri = 2;
                    res = i;
                    break;
            }
        }
    }
    if (res != -1)
        return res;
    else
        return -1;
}
