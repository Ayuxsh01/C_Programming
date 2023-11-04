//  1. Write a program in C to store elements in an array and print them.
//  Test Data :
//  Input 10 elements in the array :
//  element - 0 : 1
// element - 1 : 1
//  element - 2 : 2
// #include <stdio.h>
// int main()
// {
//     int arr[8];
//     int i;
//     printf("\nRead the elements of an array\n");
//     printf("Input 10 elements in the array:\n");
//     for (int i = 0; i <= 8; i++)
//     {
//         printf("element %d is ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("\nElements in array are:");
//     for (i = 0; i <= 8; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a[100];
    int i, n, sum = 0;
    printf("The sum of all Elememts in a row\n");
    printf("____________________________________\n");
    printf("Enter the number of the elements to be stored in the array\n");
    scanf("%d", &n);
    printf("Enter %d elements in the array\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("Sum of all elements stored in the array is %d\n\n", sum);
    return 0;
}