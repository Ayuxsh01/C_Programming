#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while(str[i]!='\0')
    {                                              // while(str[i]!='\0')
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    //char str[] = {'s', 'u', 'r', 'a', 'j', '\0'};
     //char str[6]="suraj";
    char str[50];
     gets(str);
    printf("Using custom function printstar\n");  
     printstr(str);
    //printf("Using printf %s\n", str);
    // printf("using puts:\n");
     puts(str);
    return 0;
}