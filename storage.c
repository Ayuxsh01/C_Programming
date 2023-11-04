#include <stdio.h>
#include "suraj.c"

int sum;
int myfunc(int a, int b)
{
    auto int sum;
    sum = a + b;
    return sum;
}
int sum = 98;

int main()
{

    // Declaration - Telling the compilier about the varible (No space reserverd)

    // Definition - Declaration + Space reservation

    //  int sum = myfunc(24,65);
    // printf("The sum is %d\n",sum);

    printf("The sum is %d\n", sum);
    return 0;
}