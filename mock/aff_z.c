#include <unistd.h>

void    print_z(char *str)
{
    while (*str)
    {
        if(*str =='z')
            str++;
        str++;
    }
    write(1, "z", 1);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        print_z(argv[1]);
    }
    else
        write(1, "z",1);
    write(1, "\n",1);
}   