#include <stdio.h>

int main()

{ int Application_Number , Date_of_Birth , marks;
    printf("Application_Number");
    scanf("%d", &Application_Number);

    printf("Date_of_Birth\nDD-MM-YYYY");
    scanf("%d", &Date_of_Birth);


if (marks>=90)
     {
     printf("congrats!You passed in both Mathematics & Science\nYou won Inr 100\nTomorrow in morning assembly you must have to pressent otherwise you will lost your reward");
     }

      else if (marks>=65)
     {
        printf("congrats!You passed in only Mathematics\nYou won Inr 80\nTomorrow in morning assembly you must have to pressent otherwise you will lost your reward");
 
     }

        else if(marks>=55)
        {
            printf("congrats!You passed in Science\nYou won Inr 70\nTomorrow in morning assembly you must have to pressent otherwise you will lost your reward");
        
        }
        else if (marks<55)
        {
        printf("Padhle bhai;)\nbina padhe or marks laye kuch nhi milne wla");
        }

}