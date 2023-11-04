#include <stdio.h>

#define PI 3.14 //don't add #define pi=3.14 it will create error

void main()
{
    int a=8;
    const float b=7.65;
    //PI=8.65; //can't do this since PI is constant

    printf("%0.2f",PI);

}