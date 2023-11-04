// #include<stdio.h>
// int main()
// {
//     char str[]="CodeWIthHarry";
//     printf("%s",str);
//     return 0;

// }
//.........................................Use of function gets.......................................................
#include<stdio.h>
// int main()
// {
//     char name[50];
//     printf("Enter your name: ");
//     gets(name);
//     printf("My name is %s" ,name);
    
//      return 0;
// }
#include <string.h>
int main()
{
    char s1[]="Suraj";
    char s2[]="Ankit";
    char s3[]="Saurav";
    char s4[100];
    strcpy(s4,strcat(s1,s2));
    puts(s4);
    printf("The strcmp for s1,s2 returned %d\n",strcmp(s1,s2));
    //puts(strcat(s1,s2));
    printf("The length of s1 is %d\n",strlen(s1));
    printf("The length of s2 is %d\n",strlen(s2));
    printf("The length of s3 is %d\n",strlen(s3));
    printf("The reversed string s1 is :");
    puts(strrev(s1));
    printf("The reversed string s2 is: ");
    puts (strrev(s2));
    printf("The reversed string of s3 is: ");
    puts (strrev(s3));
    //strcpy(s3,strcat(s2,s1));
    
    //printf("The combination is %c: ", strcat(s1,s2));
    //(strcat(s1,s2));
    
    return 0;

}