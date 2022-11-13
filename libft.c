int 	ft_strlen ( char *str)

{
	int 	e;

	e = 0 ;
	tandis que (str[e] != ' \0 ' )
	{
		e++;
	}
	retour (e);
}

#include <string.h>

void    *ft_memset (void *s, int c, size_t n)
{
    char *str;

    str = s;
    while (n)
    {
        *str = c;
        str++;
        n--;
    }
    return (s);
}

#include <string.h>

void    ft_bzero (void *s, size_t n)
{
    unsigned char   *dest;
    size_t  i;

    dest = s;
    i = 0;
    while(i++ < n)
        *dest++ = 0;
}

#include <string.h>

void    *ft_memcpy (void *dst, const void *src, size_t n)
{
    size_t i;
    char *s1;

    s1 = (char *)dst;
    i = 0;
    while (i < n)
    {
        *(char *)s1 = *(char *)src;
        s1++;
        src++;
        i++;
    }
    return (dst);
}

#include <string.h>

void    *ft_memmove (void *dst, const void *src, size_t n)
{

}

unsigned int    ft_strlcpy(char *dst, char *src, unsigned int size)
{
    unsigned int    res;
    unsigned int    i;

    res = 0;
    while (src[res] != '\0')
        ++res;
    i = 0;
    while (src[i] != '\0' && i < (size - 1))
    {
        dst[i] = src[i];
        ++i;
    }
    dst[i] = '\0';
    return (res);
}

size_t ft_strlcat(char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    while (s1[i] != '\0' && i < n)
        i++;
    j = i;
    while(s2[i - j] != '\0' && i < n - 1)
    {
        s1[i] = s2[i - j];
        i++;
    }
    if (j < n)
        s1[i] != '\0';
    return (j + ft_strlen(s2));
}

#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c); 
}

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}
