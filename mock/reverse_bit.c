#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char res = 0;
    int i = 0;

    while( i < 8)
    {
        res = (res * 2) + (octet % 2);
        octet = octet /2;
        i++;

    }
    return res;
}

int main (void)
{
    unsigned char c;
    c = '&';
    write(1, &c,1);
    write(1, "\n",1);
    c = reverse_bits(c);
    write(1, &c, 1);
    write(1, "\n",1);
}