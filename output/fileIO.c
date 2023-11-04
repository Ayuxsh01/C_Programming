#include <stdio.h>
int main()
{
    //________Reading a File_____________
    FILE *ptr = NULL;
    char string[45]; //= "Hey Let's code the world\n";
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n", string);

    //_______Writing a file_______
    // ptr = fopen("myfile.txt", "a");
    // fprintf(ptr,"%s", string);
    ptr = fopen("myfile.txt", "w");
    fprintf(ptr,"%s", string);

    return 0;
}