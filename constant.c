#include <stdio.h>

void main()

{
    int a=8;
    const float b=6.854;
   // b=8.123; //can't do this since b is constant

    printf("%7.3f",b);
}