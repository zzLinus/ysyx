#include <klib-macros.h>
#include <klib.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s)
{
    panic("Not implemented");
}

char *strcpy(char *dst, const char *src)
{
    panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n)
{
    panic("Not implemented");
}

char *strcat(char *dst, const char *src)
{
    panic("Not implemented");
}

int strcmp(const char *s1, const char *s2)
{
    int diff = 0;
    for (int i = 0;; i++)
    {
        diff += s1[i] - s2[i];
        if (s1[i] == '\0' || s2[i] == '\0')
            break;
    }
    return diff;
}

int strncmp(const char *s1, const char *s2, size_t n)
{
    panic("Not implemented");
}

void *memset(void *s, int c, size_t n)
{
    panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n)
{
    panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n)
{
    panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n)
{
    panic("Not implemented");
}

#endif
