#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
} suraj,ankit,saurav;
//struct Student suraj,ankit,saurav;
void print()
{
    printf("%s", suraj.name);

}
int main()
{
    suraj.id=25445;
    ankit.id=45972;
    saurav.id=89564;
    suraj.marks=96;
    ankit.marks=94;
    saurav.marks=97;
    suraj.fav_char='s';
    ankit.fav_char='a';
    saurav.fav_char='d';
    strcpy(suraj.name,"Suraj");
    strcpy(ankit.name,"Ankit");
    strcpy(saurav.name,"Saurav");
    printf("Suraj got %d marks\n",suraj.marks);
    printf("Suraj's name is:%s\n",suraj.name);
    printf("Ankit got %d marks\n",ankit.marks);
    printf("Ankit id is:%d\n",ankit.id);
    print();
    return 0;


}