#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...)
{
    char buff[256];
    va_list args;
    bool flag_z = 0;
    uint8_t zfmt = 0;
    va_start(args, fmt);
    for (const char *p = fmt; *p != '\0'; ++p)
    {
        switch (*p)
        {
            case '%':
            top:
                switch (*++p)
                {
                    case 'd':
                        if (flag_z)
                        {
                            for (int i = 0; i < zfmt-1; i++)
                            {
                                putch('0');
                            }
                        }
                        itoa(va_arg(args, int), buff, 10);
                        for (char *bp = buff; *bp != '\0'; bp++)
                            putch(*bp);
                        break;
                    case 's':
                        strcpy(buff, va_arg(args, const char *));
                        for (char *bp = buff; *bp != '\0'; bp++)
                            putch(*bp);
                        break;
                    case '0': flag_z = 1; goto top;
                    default:  // BUG: this implementation has serious bug
                        zfmt = atoi(p);
                        goto top;
                }
                break;
            default: putch(*p);  // copy one charactor
        }
    }

    putch('\0');

    va_end(args);
    return 1;
}

int vsprintf(char *out, const char *fmt, va_list ap)
{
    panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    for (const char *p = fmt; *p != '\0'; ++p)
    {
        switch (*p)
        {
            case '%':
                switch (*++p)
                {
                    case 'd':
                        itoa(va_arg(args, int), out, 10);
                        out += strlen(out);  // it will set out to where \0 suppose to be and ready to overwrite it
                        break;
                    case 's':
                        strcpy(out, va_arg(args, const char *));
                        out += strlen(out);  // it will set out to where \0 suppose to be and ready to overwrite it
                        break;
                }
                break;
            default: *out = *p; out++;  // copy one charactor
        }
    }
    *out = '\0';

    va_end(args);
    return 1;
}

int snprintf(char *out, size_t n, const char *fmt, ...)
{
    panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap)
{
    panic("Not implemented");
}

#endif
