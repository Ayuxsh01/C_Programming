#include<stdio.h>
int main()
{
  

    int i, age;
    for(i=0;i<5;i++)

    {
        printf("iteration time=%d\n enter your age:\n",i);
        scanf("%d", &age);
        if (age>10)
        {
            break;
        }
        if (age<10)
        {
            continue;
        }
        printf("hey gyes\n");
        printf("this code is printed because if condition is not satisfied\n");
        printf("checking continue statement \n\n");

    }


    return 0;
}