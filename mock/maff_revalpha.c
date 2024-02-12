#include <unistd.h>

void rev_alpha()
{
    int index = 90;
    int n = 4;
    while (index >= 65)
    {
        if (n % 2 == 0)
        {
            int num = index + 32;
            write (1, &num, 1);
        }
        else
            write(1, &index, 1);
        index --;
        n++;
    }
}

int main(void)
{
    //write (1, "zYxWvUtSrQpOnMlKjIhGfEdCbA", 26);
    rev_alpha();
    write(1,"\n", 1);
    write (1, "zYxWvUtSrQpOnMlKjIhGfEdCbA", 26);
}