/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters
celsius to fahrenhiet
fahrenhiet to kelvin
celsius to kelvin

*/
#include <stdio.h>

int main()
{
    int choices;
    float kilometres, miles, inches, foots, centimetres, pound, kilograms, metres, celsius, fahrenheit, kelvin;
    char num = '1'; // Initialize num with '1'
    int ch;
    printf("Press '1' if you want to use this unit converter\n");
    printf("Press '2' if you don't want to use this unit converter\n");
    printf("Press '0' if you want to Exit from this unit converter\n");



    scanf(" %d", &ch); // Add a space before %c to consume the newline character

    if (num == 0)
            {
                goto end;
            }

    switch (ch)
    {
    case 1:
        printf("Let's use the conversion system\n");
        printf("Enter '1' to convert units from Kilometres to miles\n");
        printf("Enter '2' to convert units from inches to foot\n");
        printf("Enter '3' to convert units from centimetres to inches\n");
        printf("Enter '4' to convert units from pound to kilograms\n");
        printf("Enter '5' to convert units from inches to metres\n");
        printf("Enter '6' to convert units from celsius to fahrenheit\n");
        printf("Enter '7' to convert units from fahrenheit to kelvin\n");
        printf("Enter '8' to convert units from celsius to kelvin\n");

        scanf("%d", &choices);

        switch (choices)
        {
        case 1:
            printf("Enter a number in kilometres\n");
            scanf("%f", &kilometres);
            miles = kilometres * 0.6213;
            printf("There are %0.2f miles in %0.2f kilometres\n", miles, kilometres);
            break;
        case 2:
            printf("Enter a number in inches\n");
            scanf("%f", &inches);
            foots = inches * 0.0833;
            printf("There are %0.4f foots in %0.2f inches\n", foots, inches);
            break;
        case 3:
            printf("Enter a number in centimetres\n");
            scanf("%f", &centimetres);
            inches = centimetres * 0.3937;
            printf("There are %0.2f inches in %0.2f centimetres\n", inches, centimetres);
            break;
        case 4:
            printf("Enter a number in pounds\n");
            scanf("%f", &pound);
            kilograms = pound * 0.4536;
            printf("There are %0.2f kilograms in %0.2f pounds\n", kilograms, pound);
            break;
        case 5:
            printf("Enter a number in inches\n");
            scanf("%f", &inches);
            metres = inches * 0.0254;
            printf("There are %0.3f metres in %0.2f inches\n", metres, inches);
            break;
        case 6:
            printf("Enter a number in celsius\n");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("There are %0.2f fahrenheit in %0.2f celsius\n", fahrenheit, celsius);
            break;
        case 7:
            printf("Enter a number in fahrenheit\n");
            scanf("%f", &fahrenheit);
            kelvin = (fahrenheit + 459.67) * 5 / 9;
            printf("There are %0.2f kelvin in %0.2f fahrenheit\n", kelvin, fahrenheit);
            break;
        case 8:
            printf("Enter a number in celsius\n");
            scanf("%f", &celsius);
            kelvin = celsius + 273.15;
            printf("There are %0.2f kelvin in %0.2f celsius\n", kelvin, celsius);
            break;
        default:
            printf("Please select a valid conversion option\n");
            break;
        }
        break; 

    case 2:
        printf("Thanks for visiting!\nI'm always here to help you.\n");
        break;

    //default:
        //printf("You have entered a wrong character. Please try again.\n");
       // break;
    }

end:

    printf("Thanks for visiting us.\n");
    return 0;
}
