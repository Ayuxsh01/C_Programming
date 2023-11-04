// Implict typecasting
/*#include <stdio.h>
int main()
{
    short a=10;
    int b;
    b=a;
    printf("%d\n", a);
    printf("%d\n", b);
}*/
// explicit typecasting
/*#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("A is %d\n", a);
    printf("Enter the value of b\n");                   //some errror in character
    scanf("%f", &b);
    printf ("B is %d\n", (int)b);
    printf("Type any character c\n");
    scanf("%c", &c);
    printf("character is %d",(int)c);
    return 0;
}*/
// as per vdo lecture
#include <stdio.h>
//typecasting syntax
//(type) value;
int main()
{
    int a=3;
    float b=(float)54/5;
    printf("the value of a is %f\n",b);
    return 0;
}