#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...)
{
    panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap)
{
    panic("Not implemented");
}

// TODO:  implement this tody
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
                    case 'd': itoa(va_arg(args, int), out, 10); break;
                    case 's':
                        strcpy(out, va_arg(args, const char *));
                        out += strlen(out);  // it will set out to where \0 is and ready to overwrite it
                        break;
                }
                break;
            case '\n': break;  // TODO : implement \n \t
            case '\t': break;
            default: *out = *p; out++;  // copy one charactor
        }
    }

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
