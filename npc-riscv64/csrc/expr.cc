#include "infrastructure.h"

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
