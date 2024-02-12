#include <stdlib.h>
#include <stdio.h>

int *range(int min, int max)
{
    int diff  = max - min;
    int *arr;

    arr = malloc(sizeof(int) * diff);

    if(!arr)
        return (0);

    int j = 0;
    while (j <= diff)
    {
        arr[j] = min + j;
        j++;
    }
    return arr;
}

int main ()
{
    int i = 0;
    int *arr;
    arr  = range(1,5);
    while (i < 5)
    {    
        printf("%d", arr[i]);
        i++;
    }
}