#include <klib-macros.h>
#include <klib.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s)
{
    const char *str;

    for (str = s; *str; ++str)
        ;
    return (str - s);
}

char *strcpy(char *dst, const char *src)
{
    char *saved = dst;
    while ((*dst++ = *src++) != '\0')
        ;

    return saved;
}

char *strncpy(char *dst, const char *src, size_t n)
{
    panic("Not implemented");
}

char *strcat(char *dst, const char *src)
{
    char *ptr = dst + strlen(dst);

    while (*src != '\0')
    {
        *ptr++ = *src++;
    }

    *ptr = '\0';

    return dst;
}

int strcmp(const char *s1, const char *s2)
{
    int charCompareStatus = 0;
    while (*s1 == *s2)
    {
        s1++;
        s2++;
        if (!(*s1 != '\0' && *s2 != '\0'))
            break;
    }
    charCompareStatus = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 1 : -1;
    return charCompareStatus;
}

int strncmp(const char *s1, const char *s2, size_t n)
{
    panic("Not implemented");
}

void *memset(void *s, int c, size_t n)
{
    uint8_t *p = s;
    while (n--)
    {
        *p++ = (uint8_t)c;
    }
    return s;
}

void *memmove(void *dst, const void *src, size_t n)
{
    panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n)
{
    char *pszDest = (char *)out;
    const char *pszSource = (const char *)in;
    if ((pszDest != NULL) && (pszSource != NULL))
    {
        while (n)
        {
            *(pszDest++) = *(pszSource++);
            --n;
        }
    }
    return out;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *cs = (unsigned char *)s1;
    unsigned char *ct = (unsigned char *)s2;

    for (i = 0; i < n; i++, cs++, ct++)
    {
        if (*cs < *ct)
        {
            return -1;
        }
        else if (*cs > *ct)
        {
            return 1;
        }
    }
    return 0;
}

void strrev(char *arr, int start, int end)
{
    char temp;

    if (start >= end)
        return;

    temp = *(arr + start);
    *(arr + start) = *(arr + end);
    *(arr + end) = temp;

    start++;
    end--;
    strrev(arr, start, end);
}

#endif
