#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, i=0;
    int *i2;
    while (i<45688)
    {
        printf("Welcome to the world of AI\n");
        i2= malloc(34586*sizeof(int));
        if (i%100 == 0)
        {
            getchar();

        }
        i++;
       free(i2); // without this we will encounter a situation of memory leak

    }
     return 0;
}                       //For watching memory leak comment out free ptr left click on taskbar ->go to taskmanager->go to a.exe(file name) -> you will see that
                       //file size is increasing after running programming that's memory leak 