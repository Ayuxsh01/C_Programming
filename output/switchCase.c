#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 1:
        printf("the age is 3");

        break;

    case 5:
        printf("the age is 5");

        break;

    case 10:
        printf("the age is 10");

        break;

    default:
        printf("age is not 3 ,5 or 10");
    }

    return 0;
}