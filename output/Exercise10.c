// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     int x;
//     char *ptr;
//     int n = 3;

//     printf("Hey!!Welcome to ABC Company pvt ltd\n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("Employe%d:\n", i + 1);
//         printf("Enter the length of Employee id.\n");
//         scanf("%d", &x);

//         // Allocate the Memory
//         ptr = (char *)calloc(x + 1, sizeof(char)); //+1 for null terminator
//         if (ptr = NULL)
//         {
//             printf("Memory Allocation Failed");
//             return 1;
//         }

//         printf("Enter the Employee id Number:-\n");
//         scanf("%s", ptr);

//         printf("Your Employee id.is :- %s\n", ptr);
//     }
//     return 0;
// }

//................According to Harry.....................
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *) malloc((chars+1)*sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n",ptr );
        free(ptr);
        i = i + 1;
    }

    return 0;
}
