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
    char key;
    float kilometresToMetres = 1000;
    float KilometresToMiles = 0.621371;
    float inchessToFoot0 = .0833333;
    float CentimetresToInches = 0.393701;
    float PoundToKilograms = 0.453592;
    float InchesToMetres = 0.0254;
    float celsius, fahrenheit, kelvin;
    float first, second;

    while (1)
    {
        printf("Press q to exit the program\n");
        printf("Press 1 for Kilometres to Metres\n");
        printf("Press 2 Kilometres to Miles\n");
        printf("Press 3 Inches to Foot\n");
        printf("Press 4 Centimetres to Inches\n");
        printf("Press 5 Pound to Kilograms\n");
        printf("Press 6 Inches to Metres\n");
        printf("Press 7 celsius to fahrenhiet\n");
        printf("Press 8 Fahrenheit to Kelvin\n");
        printf("Press 9 Celsius to Kelvin\n");

        scanf(" %c", &key);

        switch (key)
        {
        case 'q':
            printf("Exiting the Program....\nFeel free to come back again\n");
            goto end;
            break;
        case '1':
            printf("Enter first unit\n");
            scanf("%f", &first);
            second = first * kilometresToMetres;
            printf("%.2f Metres\n\n", second);
            break;
        case '2':
            printf("Enter first unit\n");
            scanf("%f", &first);
            second = first * KilometresToMiles;
            printf("%.2f Miles\n\n", second);
            break;
        case '3':
            printf("Enter first unit\n");
            scanf("%f", &first);
            second = first * inchessToFoot0;
            printf("%.2f foot\n\n", second);
            break;
        case '4':
            printf("Enter first unit\n");
            scanf("%f", &first);
            second = first * CentimetresToInches;
            printf("%.2f Inches\n\n", second);
            break;
        case '5':
            printf("Enter first unit\n");
            scanf("%f", &first);
            second = first * PoundToKilograms;
            printf("%.2f Kilograms\n\n", second);
            break;
        case '6':
            printf("Enter first unit\n");
            scanf("%f", &first);
            second = first * InchesToMetres;
            printf("%.2f Miles\n\n", second);
            break;
        case '7':
            printf("Enter first unit\n");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("%.2f Miles\n\n", fahrenheit);
            break;
        case '8':
            printf("Enter first unit\n");
            scanf("%f", &fahrenheit);
            kelvin = (fahrenheit + 459.67) * 5 / 9;
            printf("%.2f Miles\n\n", kelvin);
            break;
        case '9':
            printf("Enter first unit\n");
            scanf("%f", &celsius);
            kelvin = celsius + 273.15;
            printf("%.2f Miles\n\n", celsius);
            break;
        default:
            printf("Try again!!\n");
            break;
        }
    }

end:

    return 0;
}