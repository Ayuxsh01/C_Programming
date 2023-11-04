#include<stdio.h>

void main()

{

 /* a&b:- both value need to be true
  a|b (a or b) :- one value need to be true 
  a^b (a exclusive b) :- in this operators one value need to be true and 
                          one value need to be false 
     example a  | b  | a&b | a|b  | a^b
             0  | 0  |  0  |  0   |  0
             0  | 1  |  0  |  1   |  1
             1  | 1  |  1  |  1   |  0
             1  | 0  |  0  |  1   |  1
 */


 
    int a,b;

    a=25;
    b=21;
     printf("a||b=%d\n",a&b);
     printf("a|b=%d\n",a|b);
     printf("a^b=%d\n",a^b);

}