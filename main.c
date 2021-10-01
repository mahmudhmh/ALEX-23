#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char m=0xAF;
    unsigned int y=0x5C;
    signed int f=0x6B;
    int y1=-15;
    int y2=5;

    printf("m= %x y=%x f=%x d=%x",m,y,f,y1,y2);
    printf("m= %b y=%b f=%b d=%b",m,y,f,y1,y2);
}
