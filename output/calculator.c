
#include <stdio.h>

int main()
{
    char opt;
    int a, b;
    float res;

    printf("\nEnter the first number: ");
    scanf("%d", &a);

    printf("Choose an operator (/,*,+,-) to perform the operation in the calculator: ");
    scanf(" %c", &opt);

    if (opt == '/')
    {
        printf("You selected Division\n");
    }
    else if (opt == '*')
    {
        printf("You selected Multiplication\n");
    }
    else if (opt == '+')
    {
        printf("You selected Addition\n");
    }
    else if (opt == '-')
    {
        printf("You selected Subtraction\n");
    }
    else
    {
        printf("Choose a valid operator\n");
        return 0;  // Terminate the program if the operator is invalid
    }

    printf("Enter the second number: ");
    scanf("%d", &b);

    switch (opt)
    {
    case '/':
        if (b == 0)
        {
            printf("Error: Division by zero is not allowed\n");
            return 0;
        }
        res = (float)a / b;
        printf("%d / %d = %.2f\n", a, b, res);
        break;

    case '*':
        res = (float)a * b;
        printf("%d * %d = %.2f\n", a, b, res);
        break;

    case '+':                                                   //res=result
        res = (float)a + b;
        printf("%d + %d = %.2f\n", a, b, res);
        break;

    case '-':
        res = (float)a - b;
        printf("%d - %d = %.2f\n", a, b, res);
        break;

    default:
        printf("Something went wrong!\nTry again!\n");
    }

    return 0;
}
