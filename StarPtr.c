#include <stdio.h>

void StarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void ReverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows;
    char type;
    printf("Enter 0 for star pattern and 1 for reverse star pattern\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);

    switch (type)
    {
    case 0:
        StarPattern(rows);
        break;
    case 1:
        ReverseStarPattern(rows);
        break;
    default:
        printf("You have entered an invalid choice");
        break;
    }
    return 0;
}
