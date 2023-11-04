//fib_recursive(int n):
  //   if n==1 or n==2:
    //     return n
//
  //   else:
    //  return fib_recursive(n-1) + fib_recursive(n-2)#include <stdio.h>
#include <stdio.h>
int fib_recursive (int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else 
    {
        return fib_recursive (n-1)+fib_recursive (n-2);

    }

}
int fib_iterative (int n)
{
int a=0;
int b=1;
for (int i=0; i<n-1;i++)
{
    b=a+b;
    a=b-a;

}
return a;
}


int main()
{
    int number;
    printf("Enter the inddex to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative appproach is %d\n", number , fib_iterative(number));
    printf("The value of fibonacci number at position no. %d using recursive approach is %d\n", number, fib_recursive(number));
    
    return 0;
}
