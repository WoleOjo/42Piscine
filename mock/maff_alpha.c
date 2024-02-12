#include <unistd.h>

int main(void)
{
    int index = 65;
    int n = 3;
    int num;
    while (index <= 'Z')
    {
        if (n % 2 != 0)
        {
            num = index + 32;
            write (1, &num, 1);
        }
        else
            write(1, &index, 1);
        n++;
        index++;
    }
}