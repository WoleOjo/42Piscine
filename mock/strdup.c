#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int ft_strlen(char * str)
{
    int i = 0;
    while(*str)
    {
        str++;
        i++;
    }
    return i;
}
char *ft_strdup(char *src)
{
    int i = 0;
    while (src[i])
    {
        i++;
    }
    
    char * dest;

    dest = (char *) malloc( sizeof(*src) * (i +1));

    if (!dest)
        return (NULL);
    
    int j = 0;
    while (j < i)
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return dest;


}

int main(void)
{
    char *p = strdup("Hello Solomon");
     char *s = strdup("Hello Solomon");
    printf("%d\n", ft_strlen(p));
    printf("%d\n", ft_strlen(s));

    printf("%s\n", strdup("Hello Solomon"));
    printf("%s", ft_strdup("Hello Solomon"));
}