#include <stdio.h>

int main()

{

    /*  int i=0, j=0;
      for (; i<6,j<7;i++,j++)
      {
          printf("%d %d\n", i,j);

      }
      /*printf("hello world\n");
      int i,j=0;
      for(i=0; i<5,j<7; i++,j++)
      {
          printf("%d %d\n", i,j);
      }*/
    int i = 0, j = 0, k = 0;
    for (; i <= 6, j <= 3, k <= 5; i++, j++, k++)
    {
        printf("%d %d %d\n", i, j, k);
        // i=i+2;
        // j=j+2;
        // k=k+2;
        // i++; j++; k++;
    }

    return 0;
}