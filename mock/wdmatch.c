#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        i++;
    }
    int wc = 0;
    int j = 0;
    while (s1[j])
    {
        int k = 0;
        while(s2[k])
        {
            if (s1[j] == s2[k])
            {
                wc ++;
                break;
            }
            k++;
        }
        j++;
    }

    if (wc == i)
    {
        int y = 0;
        while (s1[y])
        {
            write(1, &s1[y],1);
            y++;
        }

    }
}

int main (int argc , char **argv)
{
    if (argc ==3)
    {
        wdmatch(argv[1], argv[2]);
    }
    write(1, "\n",1);
}