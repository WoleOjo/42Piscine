#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int num = 0;
    int sign = 1;
    int i = 0;

    while(str[i]== ' ' || (str[i] >= 9 && str[i]<= 13))
    {
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *=-1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return (sign * num);

}

int main(void)
{
    printf("%d\n", atoi("  \t \n \v --234"));
    printf("%d\n", ft_atoi(" \t \n \v --234"));
    
}