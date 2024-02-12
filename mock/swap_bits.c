#include <unistd.h>

unsigned char swap_bits(unsigned char octet)
{
    unsigned first_part = (octet % 16) * 16;
    unsigned second_part = (octet / 16) ;
    return (first_part + second_part);
}

int main (void)
{
    unsigned char c;
    c = 't';
    write(1, &c,1);
    write(1, "\n",1);
    c = swap_bits(c);
    write(1, &c, 1);
    write(1, "\n",1);
}