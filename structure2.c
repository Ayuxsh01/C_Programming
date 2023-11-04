#include<stdio.h>
#include<string.h>
struct book {
    char title[200];
    char author_name[200];
    float price;
    int pages;
};
int main()
{
    struct book book1={"C programming","ABC",130.00,550};
    printf("\n Title = %s", book1.title);
    printf("\n Name = %s", book1.author_name);
    printf("\n Price=%0.2f", book1.price);
    printf("\n Pages=%d",book1.pages);
    return 0;
}