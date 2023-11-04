/*Example of Call by Reference*/
#include <stdio.h>
// function definition to swap values
void swap(int *x, int *y)
{
    int temp;
    temp = *x; // save the value at the address
    *x = *y;   // Put y int x
    *y = temp; // Put temp int y
    return;
}
int main()
{
    int a = 34, b = 74;
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}
