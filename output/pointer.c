#include<stdio.h>

//int main()
/*{
	int x=5;
	int *a =&x;

	printf("%d\n",&x );
	printf("%d",a );
	return 0;
}*/
/*{
    int x, a;
    printf("%p\n",&x );
    return 0;

}*/
//example 1.
/*void ptrfunc (int *ptr)
{
    *ptr = 8;
}
int main()
{
    int x=5;
    printf("x=%d\n", x);
    printf(&x);
    printf("x=%d", x);

    return 0;

}*/
int main()
{
    printf("Pointer Basics\n");
    int a= 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer is %x\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("the address of a is %p\n", ptra);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);

    return 0;


}