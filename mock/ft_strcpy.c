#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}


char *ft_strncpy(char *dest, char *src, int n)
{
    int i = 0;
    while (src[i] && i<n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';    
    }
    return dest;
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char str[] = "Hello Solomon, how are you?";
    char dst[50];


    printf("%d", ft_strlen(str));
    printf("%s", "\n");

    printf("%s\n", ft_strncpy(dst,str,12));
    printf("%s", strncpy(dst,str,12));
    printf("%s\n", "\n");
    printf("%s", "\n");
    printf("%s\n", ft_strcpy(dst,str));
    printf("%s", strcpy(dst,str));
}
    
