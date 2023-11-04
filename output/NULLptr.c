//......................#1...........................
#include <stdio.h>
// int main()
// {
//     int a = 34;
//     int *ptr = &a;

//     printf("The address of a %d\n", *ptr);
//     // printf("The address of a %d\n", &a);

//     return 0;
// }

//.....................#2............................
// int main ()

// {
//     int a = 34;
//     int *ptr = NULL;

//     printf("The address of a %d\n", ptr);
//     return 0;

// }

//.........................#3......................

int main()

{
    int a = 34;
    int *ptr = &a;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a NULL pointer and can not be refrenced");
        return 0;
    }
}
