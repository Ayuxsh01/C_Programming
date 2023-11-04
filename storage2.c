// #include <stdio.h>

// int myfunc(int a, int b)
// {
// // auto int sum;
// extern int sum;
// // sum = a+b;
// return sum;
// }
// int sum = 456;
// int main()
// {
//     int sum = myfunc (17,21);
//     printf("The sum is %d\n", sum);
//     return 0;

// }
#include <stdio.h>

int myfunc(int a, int b)
{
    // auto int sum;
    static int myvar;
    // sum = a+b;
    myvar++;
    printf("The myvar is %d\n", myvar);

    return myvar;
}

int main()
{
    // int myvar = myfunc (17,21);
    int myvar = myfunc(17, 21);
    myvar = myfunc(17, 21);
    myvar = myfunc(17, 12);
    myvar = myfunc(17, 21);

    // printf("The sum is %d\n", sum);
    return 0;
}