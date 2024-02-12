#include <unistd.h>

void    wd_match(char *s1, char *s2)
{
    int i = 0;
    char s[4]= "XYZ";

    while (s2[i])
    {
        int j = 0;
        while (s1[j] && s1[j] == s2[i +j])
        {
            j++;
        }
        if (s1[j] == '\0')
        {
            int k = 0;
            while (s[k])
            {
                write(1, &s[k], 1);
                k++;
            }
        }
        else
            write(1, &s2[i],1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        wd_match(argv[1], argv[2]);
    }
    write(1, "\n", 1);
}