#include <stdio.h>

void main()

{

    int Application_Number, Date_of_Birth;

    printf("Application_Number\n");
    scanf("%d", &Application_Number); 

    printf("Date_of_Birth\nDDMMYYYY\n");
    scanf("%d", &Date_of_Birth);

    if (Application_Number == 2023789)
    {
        switch (Date_of_Birth)
        {
        case 19052004:

            printf("Your Score Card\nMath 95\nScience 99\nComputer Science 96\n");
            printf("Total Marks 290 \tRank 1\n");

            break;
        default:
            printf("you Application Number or Date of Birth is invalid");
            break;
        }
    }
    else if (Application_Number == 2023790)
    {
        switch (Date_of_Birth)
        {
        case 16022004:
            printf("your score card\nMath 90\nScience 85\nComputer Science 96\n");
            printf("Total marks 271\tRank 2");
            break;

        default:

            printf("you Application Number or Date of Birth is invalid");
            break;
        }
    }
    else
    {
        printf("Check your Application Number or Date of Birth!\vTry again later!");
    }
}
