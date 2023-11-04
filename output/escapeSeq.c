#include <stdio.h>

#define PI 3.14 //don't add #define pi=3.14 it will create error

void main()
{
    int a=8;
    const float b=7.65;
    //PI=8.65; //can't do this since PI is constant   

  //  printf("%0.2f",PI);

  //printf("Hello world\%f,",PI);
  //it can't be printed this will create error 

  //printf("Hello world \\%0.2f", PI);                            
 //it will be printed as Hello world \3.14

    // printf("Hello world\n%0.2f",PI); 
   // it will be printed as- Hello world
    //                        3.14

   // printf("Hello world \t\t Hello google \t %0.2f",PI);
  //  it will be printed as - Hello world        Hello google     3.14
     printf("Hello world \t\t Hello google \v %0.2f",PI);
/*   

     comment function [IGNORED]
                                
                                */
}