#include <stdio.h>
typedef struct details
{
   char name[100];
   char dl[100];
   char route[100];
   float kms;
} details;

int main()
{
   int numDrivers = 3;
   details driverDetails[numDrivers];

   printf("Enter Driver Details\n\n");
   for (int i = 0; i < numDrivers; i++)
   {
      printf("Driver:%d\n\n", i + 1);

      printf("Driver name:\n");
      scanf("%s", driverDetails[i].name);

      printf("Driver D.L no.:\n");
      scanf("%s", driverDetails[i].dl);

      printf("Driver Destination:\n");
      scanf("%s", driverDetails[i].route);

      printf("Driver distance:\n");
      scanf("%f", &driverDetails[i].kms);

      printf("\n");
   }

   printf("............Informations of Driver....................\n");
   for (int i = 0; i < numDrivers; i++)
   {
      printf("Driver:%d\n\n", i + 1);

      printf("Driver Name:%s\n", driverDetails[i].name);
      printf("Driver D.L. no.:%s\n", driverDetails[i].dl);
      printf("Driver Destination:%s\n", driverDetails[i].route);
      printf("Driver Distance:%f\n\n", driverDetails[i].kms);
   }

   return 0;
}
