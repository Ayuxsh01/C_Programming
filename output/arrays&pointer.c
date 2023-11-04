// 1.
#include <stdio.h>
/*Arrays and pointers*/
/*int main()
{
    int i, a[5], *p;
    p = &a[0]; // we can also write &a or a
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", p + 1); // This will take inpur in array
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d", *(p + i)); // This will print arrays values
    }
    return 0;
}*/
/*int main()
{
    char a= '3';
    char* ptra = &a;
    printf("%d\n", ptra);
    ptra --;
    printf("%d\n",ptra);
    printf("%d", ptra-2);*/
int main()
{
    int arr[] = {311, 52, 3, 4, 5, 6, 67};
    int *arrayptr = arr;
    printf("Value at position 3 of the array is %d\n", arr[0]);
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr);
    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the second element of the array is %d\n", arr + 1);
    printf("The address of the third element of the array is %d\n", &arr[2]);
    printf("The address of the third element of the array is %d\n", arr + 2);
    // arr--;  //This line will throw an error
    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of the first element of the array is %d\n", arr[0]);
    printf("The value at address of the first element of the array is %d\n", *(arr));
    printf("The value at adress of second element of the array is %d\n", *(&arr[1]));
    printf("The value at adress of second element of the array is %d\n", arr[1]);
    printf("The value at adress of second element of the array is %d\n", *(&arr + 1));

return 0;
}