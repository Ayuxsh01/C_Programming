#include <stdio.h>
int main()
{
    // label:
    // printf("we are inside label\n");
    // goto end;
    // printf("Hello world\n");
    // goto label;
    // end:
    // printf("we are at end");

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("enter the number or enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
    end:
    printf("Thanks for visiting\n");
    return 0;
}
