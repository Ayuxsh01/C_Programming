#include <stdio.h>

int main()

{
    int a,b;
    a=0;
    printf("enter your number\n");
    scanf("%d", &b);
    while (a<=b)
    {
        printf("%d\n" ,a);
        a= a+1 ;
    }

    return 0;
}