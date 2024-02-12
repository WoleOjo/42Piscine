#include <stdlib.h>
#include <stdio.h>

int len(long nb)
{
    int len = 0;
    if (nb<0)
    {
        nb *= -1;
        len++;
    }
    while ( nb > 0)
    {
        nb /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int nb)
{
    char *str;
    long n;
    int i;

    n = nb;
    i = len(n);

    str = malloc (sizeof(char) * (i+1));
    if (!str)
        return 0;
    str[i] = '\0';

    if (nb == 0)
    {
        str[0] = '0';
    }
    i = i - 1;
    if ( n < 0)
    {
        str[0] = '-';
        n *= -1;
    }

    while (n > 0)
    {
        str[i] = 48 + (n % 10);
        n /= 10;
        i--;
    }
    return (str);

}

int main()
{
    printf("%s", ft_itoa(45678));
}