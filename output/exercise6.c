/*Given two numbers a and b and then subtract them and assign them to a and b
using call by reference 
a=4
b=3
after running the function , the values of a and b should be 
a=7
b=1*/ 
#include<stdio.h>
void changevalue(int *x , int *y)
{
    int value;
    value = *x;
    *x= *x+*y;
    *y= value-*y;
    return ;
}
int main()
{
    int a=4, b=3;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    changevalue (&a, &b);
    printf("The value of a is now %d\n", a);
    printf("The value of b is now %d\n", b);
   
    return 0;
}