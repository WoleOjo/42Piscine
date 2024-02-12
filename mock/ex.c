#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc < 1 || argc >2 || argv[1][0] == '\0')
  {
    write (1,"\n",1);
  }
    
    int i = 0;

    while (argv[1][i])
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        
        while (!(argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0'))
        {
            write(1,&argv[1][i],1);
            i++;
        }
        if (argv[1][i] == '\0')
        {
            break;
        }
        break;
    }
    write(1, "\n",1);
}