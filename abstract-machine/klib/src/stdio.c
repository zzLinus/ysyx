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
    // size_t fmt_lent = strlen(fmt);
    size_t fmt_num;
    const char *fmt_ptr = fmt;
    for (fmt_num = 0;*fmt_ptr++;)
        if (*fmt_ptr == '%')
            fmt_num++;

    va_end(args);
    return fmt_num;
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
