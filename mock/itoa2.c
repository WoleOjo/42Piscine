#include <stdio.h>
#include <stdlib.h>

int len(int num)
{
    int count = 0;
   

    if (num < 0)
    {
        num *= -1;
        count ++;
    }
    while (num > 0)
    {
        num /= 10;
        count ++;
    }
    return count;
}

char *ft_itoa(int num)
{
    char *str;
    int i = len(num);

    str = malloc(sizeof(char) * (len(num) +1));

    if(!str)
        return (NULL);

    str[i] = '\0';
    i--;
    if (num == 0)
    {
        str[0] = '0';
    }
    if (num < 0)
    {
        str[0] = '-';
        num *= -1;
    }
    while (num > 0)
    {
        str[i] = '0' + (num % 10);
        num /= 10;
        i--; 
    }
    return str;
}

int main()
{
    printf("%s", ft_itoa(45464637));
}