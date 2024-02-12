#include <unistd.h>

void    print_a(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == 'a')
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        print_a(argv[1]);
    }
    if(argc != 2)
    {
        write(1, "a", 1);
    }
    write(1, "\n", 1);
}