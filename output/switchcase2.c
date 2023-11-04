#include <stdio.h>

int main()

{
    int age, marks;
    printf("enter your age\n");
    scanf("%d", &age);

    printf("enter your marks\n");
    scanf("%d", &marks);

    switch (age)

    {
    case 3:
        printf("the age is 3\n");
        switch (marks)
        {
        case 85:
            printf("your marks are 85");
            break;

        default:

            printf("your marks are not 45");
            break;
        }

     case 6:
        printf("the age is 6\n");
        switch (marks)
        {
        case 95:
            printf("your marks are 95");

            printf("you are qualified");
            break;

        default:

            printf("your marks are not 95");
            break;
        }
         case 8:
        printf("the age is 8\n");
        switch (marks)
        {
        case 95:
            printf("your marks 95");

            printf("you are qualified");
            break;

        default:
            printf("you are not qualified");
            break;
        }
    }
    return 0;
}