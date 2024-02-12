#include <unistd.h>

void    last_word(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }

    int j = i - 1;
    while (str[j] == '\t' || str[j] == ' ')
        j--;
    while (!(str[j] == '\t' || str[j] == ' '))
    {
        j--;
    }

    j = j +1;
    while (str[j] && (str[j] != '\t' || str[j] != ' '))
    {
        write(1, &str[j],1);
        j++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        last_word(argv[1]);
    }
    write(1, "\n", 1);
}