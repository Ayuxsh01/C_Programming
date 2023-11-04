#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n",argc);
    for (int i=0;i<argc;i++)
    {
     printf("This argument at index number %d has value of %s\n",i, argv[i]);
    }
    return 0;
}


//for running this program first go to terminal and write ./filename.c the type some thing 