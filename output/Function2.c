// with argument and with return value
#include <stdio.h>
int sum(int a, int b);
int main ()
{
    int a, b, c;
    a=56;
    b=25;
    c = sum(a,b);
    printf("the sum is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}