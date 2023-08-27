#include<stdio.h>
struct student
{
    char name[50];
    char roll_no[10];
    int marks;
};
int main()
{   
    struct student s1;
    puts("Enter name :");     //take input with space
    printf("Roll no :\nAvg marks :\n");
    gets(s1.name);
    scanf("%s%d",&s1.roll_no,&s1.marks);
    printf("Name : %s\nRoll no : %s\nMarks : %d\n",s1.name,s1.roll_no,s1.marks);
    return 0;

}