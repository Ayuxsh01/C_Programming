// without arguments and without return value
#include <stdio.h>
/*void printstar()
{
    for (int i=0; i<n; i++)
    {
    printf ("%c", '*');
    }
}
int takenumber()
{
    int i;
    printf("enter a number\n");
    scanf("%d", &i)
}
int main()
{
    printstar(7);

    return 0;
}*/
/*#include <stdio.h>

void printMessage();

int main() {
    printMessage();  // Calling the function
    return 0;
}

void printMessage() {
    printf("Hello, World!\n");
}*/
/*In this code, we have a function called printMessage() that
doesn't take any arguments and doesn't return anything.
It simply prints the message "Hello, World!" to the console.
The main() function calls this printMessage() function.
When you run the program, it will output the message "Hello, World!"*/
#include <stdio.h>

void starPattern()
{
    int numStars;
    printf("Enter how many stars (*) you want: ");
    scanf("%d", &numStars);

    for (int i = 0; i < numStars; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    starPattern();
    return 0;
}
/*In this code, we have a function starPattern() that prompts the
user to enter the number of stars they want and then prints that number
 of stars. The main() function calls starPattern() to execute the star pattern.
 Note that the number of stars is read as an integer using %d
 format specifier in scanf(), and we use a for loop to print the
  stars numStars times*/
