#include<stdio.h>
int add();
int main()
{
     add();
    
    return 0;
}
int add()
{int a,b,c;
    printf("$:");
    scanf("%d",&a);
    printf("$:");
    scanf("%d",&b);
    c=a+b;
    printf("%d",c);
    return 0;
}