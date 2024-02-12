#include <unistd.h>

void repeat(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            int n = str[i] - 64;
            while (n > 0)
            {
                write(1, &str[i],1);
                n--;
            }
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            int n = str[i] - 96;
            while (n > 0)
            {
                write(1, &str[i],1);
                n--;
            }
        }
        i++;
    }
}


int main (int argc, char **argv)
{
    if (argc == 2)
    {
        repeat(argv[1]);
    }
    write (1, "\n",1);
}