//.....................Some commonly used string.....................................
// #include <stdio.h>
// #include <string.h>
/*strcat()*/
// int main()
// {
//     char s[]="Hello";
//     //printf("\t");
//     char t[25]="World";
//     strcat(s, t);
//     printf("string = %s ",s,t);
//      return 0;
// }
/*strlen()*/
// int main()
// {
//     char str[] = "Suraj";
//     int str_length;
//     str_length = strlen(str);
//     printf("Length %d", str_length);
// }
/*strcpy()*/
// int main()
// {
//     char s[]="CodeWithHArry";
//     char t[20];
//     strcpy(t,s);
//     //printf("\n Source string = %s", t);
//     printf("\n Target string=%s",s);
//     return 0;

// }
/*strcmp()*/
#include <stdio.h>
#include <string.h>
// int main()
// {
// char string1[ ] = "Harry" ;
// char string2[ ] = "Code" ;
// int a;
// a= strcmp ( string1, string2 ) ;
// printf ("\n%d", a) ;
// return 0;
// }
/*strrev()*/
int main()
{
    char str[50] = "1 2 3 4 ";
    printf("After reversing string is %s", strrev(str));
    return 0;
}