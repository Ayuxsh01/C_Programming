#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
        // recursion of function
    }
}
int main()
{
    int num;
    printf("enter no.:");
    scanf("%d", &num);
    printf("\n the factorial %d is %d", num, factorial(num));

    return 0;
}