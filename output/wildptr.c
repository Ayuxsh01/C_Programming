#include <stdio.h>
#include <stdlib.h>

int main2()
{
    int a = 334;
    int *ptr; //This is a wild pointer
    //*ptr = 34; //Tghis is not good thing to do
    ptr = &a; //ptr is no longer a wid pointer
    printf("The value of a is %d\n", *ptr);
    return 0;
    
}