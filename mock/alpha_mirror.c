#include <unistd.h>

void mirror(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i]<= 'Z')
        {
            int num = 'Z' - str[i] + 'A';
            write(1, &num, 1);
        }
        else if (str[i] >= 'a' && str[i]<= 'z')
        {
            int num = 'z' - str[i] + 'a';
            write(1, &num, 1);
        }
        else
            write(1, &str[i],1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        mirror(argv[1]);
    }
    write(1, "\n", 1);
}