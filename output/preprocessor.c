#include <stdio.h>
#include <stdlib.h>
//#include "wildptr.c"
#define PI 3.14
#define SQUARE(r) (r * r)

int main()
{
    float var = PI;
    int r;
    // int *ptr = functionDangling
    // printf("The value of PI is %f\n", var);
    printf("Enter the number\n");
    scanf("%d",&r);
    printf("The area of circle is %0.3f\n", PI * SQUARE(r));

    return 0;
}