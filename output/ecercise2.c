#include <stdio.h>

void main()

{

   printf("congratulation your result are out today!\nWinner will rewarded as per his/her marks\n");
   printf("Here you can see your prize pool\nMathematics&Science(Pass marks-90/100)-Inr 100 other wise Inr80\nScience(Pass marks-55/100)-Inr 75\nMath(Pass marks-65/100)-Inr 75\n");

   int marks;

   printf("enter your marks\n");
   scanf("%d", &marks);

   printf("you have entered %d as your marks \n", marks);
   // printf("congratulation your result are out today! \n Winner will rewarded as per his/her marks");
   //  printf("Here you can see your prize pool \n Mathematics&Science(Pass marks-90/100)-Inr 100 other wise Inr80\nScience(Pass marks-55/100)-Inr 75 \n Math(Pass marks-65/100)-Inr 75");

   if (marks >= 90)
   {
      printf("congrats!You passed in both Mathematics & Science\nYou won Inr 100\nTomorrow in morning assembly you must have to pressent otherwise you will lost your reward");
   }

   else if (marks >= 65)
   {
      printf("congrats!You passed in only Mathematics\nYou won Inr 80\nTomorrow in morning assembly you must have to pressent otherwise you will lost your reward");
   }

   else if (marks >= 55)
   {
      printf("congrats!You passed in Science\nYou won Inr 70\nTomorrow in morning assembly you must have to pressent otherwise you will lost your reward");
   }
   else if (marks < 55)
   {
      printf("Padhle bhai;)\nbina padhe or marks laye kuch nhi milne wla");
   }
}