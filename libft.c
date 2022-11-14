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
	unsigned char   *dst2;
    unsigned char   *src2;

    dst2 = dst;
    src2 = src;
    if (src < dst)
    {
        src2 = src2 + len - 1;
        dst2 = dst2 + len - 1;
        while (len > 0)
            *dst2-- = *src2--;
    }
    else if (src >= dst)
    {
        while (len > 0)
            *dst2++ = *src2++;
    }
    return (dst);
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

#include <string.h>

char *ft_strchr(const char *s, int c)
{
    char    *chr;

    chr = s;
    while (*chr != c)
    {
        if (!*chr)
            return (NULL);
        chr++
    }
    return (chr);
}

#include <string.h>
int 	ft_strlen (char *str);

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char*)s + i);
        i--;
    }
    return (NULL);
}

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int	i;
	int				b;

	i = 0;
	b = 0;
	while ((s1[i] || s2[i]) && b == 0 && i < n)
	{
		if (s1[i] != s2[i])
			b = s1[i] - s2[i];
		i++;
	}
	return (b);
}

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *str;

    if (s == NULL)
        return (NULL);
    i = 0;
    str = s;
    while (i < n)
    {
        if (str[i] == (char)c)
            return (str[i]);
        i++;
    }
    return (NULL);
}

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *sa;
    unsigned char   *sb;
    size_t          i;

    sa = s1;
    sb = s2;
    i = 0;
    while (i < n)
    {
        if (sa[i] != sb[i])
            return (sa[i] - sb[i]);
        i++;
    }
    return (0);
}

