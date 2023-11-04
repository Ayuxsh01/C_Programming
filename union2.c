#include <stdio.h>
#include <string.h>

union book {
    int pages ;
    float price;
    char title[20];
};
int main(){
    union book b1;
    b1.pages=100;
    printf("Pages:%d\n",b1.pages);
    b1.price=250.5;
    printf("Price:%.2f\n",b1.price);
    strcpy(b1.title,"C Progrmming");
    printf("Title: %s\n",b1.title);

    return 0;
}