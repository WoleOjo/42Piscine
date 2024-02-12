#include <unistd.h>

int search(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int no_double(char *str, char c, int index)
{
    int i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return 0;
        i++;
    }
    return 1;
}

void print_inter(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (search(s2,s1[i]) && no_double(s1, s1[i], i))
            write (1, &s1[i], 1);
        i++;
    }

  
}

void    print_union(char *s1, char *s2)
{
    int i = 0;
    while(s1[i])
    {
        if(no_double(s1, s1[i],i))
        {
            write(1, &s1[i],1);
        }
        i++;
    }
    int j = 0;
    while ( s2[j])
    {
        if (!(search(s1, s2[j])) && no_double(s2, s2[j],j))
            write(1, &s2[j],1);
        j++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 3)
    {
        print_union(argv[1], argv[2]);
    }
    write (1, "\n", 1);
}