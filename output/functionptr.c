#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
void greet()
{
    printf("Hello World my user Good Morning %d\n");
}
int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // testing the function
    int (*fptr)(int,int);  // Declaring the function
    fptr = &sum;  // creating a function pointer
    int d = (*fptr)(4, 6); // Derefrencing a function pointer
    printf("The value of d is %d\n", d);

    return 0;
}