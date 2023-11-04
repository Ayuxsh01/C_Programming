#include <stdio.h>

typedef struct driverDetails
{
    char name[100];
    char dl[100];
    char route[100];
    float kms;
} DriverDetails;

int main()
{
    int numDrivers = 3;
    DriverDetails drivers[numDrivers];

    printf("Enter Driver Details\n\n");

    for (int i = 0; i < numDrivers; i++)
    {
        printf("Driver: %d\n\n", i + 1);

        printf("Driver name: ");
        scanf("%s", drivers[i].name);

        printf("Driver D.L no.: ");
        scanf("%s", drivers[i].dl);

        printf("Driver Destination: ");
        scanf("%s", drivers[i].route);

        printf("Driver distance: ");
        scanf("%f", &drivers[i].kms);

        printf("\n");
    }

    printf("............Informations of Drivers....................\n");

    for (int i = 0; i < numDrivers; i++)
    {
        printf("Driver: %d\n\n", i + 1);
        printf("Driver Name: %s\n", drivers[i].name);
        printf("Driver D.L. no.: %s\n", drivers[i].dl);
        printf("Driver Destination: %s\n", drivers[i].route);
        printf("Driver Distance: %.2f\n", drivers[i].kms);
    }

    return 0;
}
