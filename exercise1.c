#include <stdio.h>

/*Question:- Print multiplication */

int main()
 {
    int a;


    printf("enter the number you the table of\n");
    scanf("%d", &a);

/* %d: reads an integer value
%f: reads a floating-point value
%c: reads a single character
%s: reads a string of characters
%l :- long
%Lf :- long double
%Lf: reads a double-precision floating-point value
*/

    printf("%d * 1 = %d\n", a, a*1);
    printf("%d * 2 = %d\n", a, a*2);
    printf("%d * 3 = %d\n", a, a*3);
    printf("%d * 4 = %d\n", a, a*4);
    printf("%d * 5 = %d\n", a, a*5);
    printf("%d * 6 = %d\n", a, a*6);
    printf("%d * 7 = %d\n", a, a*7);
    printf("%d * 8 = %d\n", a, a*8);
    printf("%d * 9 = %d\n", a, a*9);
    printf("%d * 10 = %d\n", a, a*10);

    //method 2 by using loops

   // for (int i = 1; i < 11; i++)
    //{
     //   printf("%d X %d = %d\n", a, i, a * i);
    //}



     return 0;

 }
 