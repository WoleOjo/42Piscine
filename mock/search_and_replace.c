#include <unistd.h>

void    search_replce(char *str, char *s1, char *s2)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == s1[0])
        {
            write(1, &s2[0],1);
        }
        else
            write(1,&str[i],1);
        i++;
    }
}

void    search_replce_with_string(char *str, char *s1, char *s2)
{
    int i = 0;
    while (str[i])
    {
        int j = 0;
        while (s1[j] && s1[j] == str[i + j])
        {
            j++;
        }
        if (s1[j] == '\0')
        {
            while (j > 0)
            {
                int k = 0;
                write(1, &s2[k],1);
                j--;
                k++;
                i++;
            }
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc , char **argv)
{
    if (argc == 4)
    {
        search_replce_with_string(argv[1], argv[2], argv[3]);
    }
    write(1, "\n", 1);
}