// #include <stdio.h>
 
// int main()
// {
//     stdin::cout << "Hello World";
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x;
    char *ptr;
    int n = 3;

    printf("Hey!! Welcome to ABC Company Pvt Ltd\n");

    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Enter the length of Employee ID: ");
        scanf("%d", &x);

        // Allocate memory for the Employee ID
        ptr = (char *)calloc(x + 1, sizeof(char)); // +1 for the null terminator
        if (ptr == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter the Employee ID Number: ");
        scanf("%s", ptr);

        printf("Your Employee ID is: %s\n", ptr);

        // Free allocated memory for this employee's ID
        free(ptr);
    }

    return 0;
}
