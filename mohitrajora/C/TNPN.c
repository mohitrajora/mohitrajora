#include<stdio.h>
int main()
{
    addition();
    iseven();
    return 0;
}
int addition()
{
    int a,b;
    printf("Enter a number = ");
    scanf("%d",&a);
    printf("Enter a number = ");
    scanf("%d",&b);
    printf("Addition of %d and %d is %d\n",a,b,a+b);
}
int iseven()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is Even",a);
    }
    else
    {
        printf("%d is Odd",a);
    }
}