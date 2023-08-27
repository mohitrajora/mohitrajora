#include<stdio.h>
int main()
{
    int num,a,b,total=0;
    printf("Enter a Number = ");
    scanf("%d",&num);
    a=num;
    while(a>0)
    {
        b=a%10;
        total=total+b*b*b;
        a=a/10;
    }
    if(total==num)
    {
        printf("Amrstromg Number");
    }
    else
    {
        printf("No Amrstrong Number");
    }
    return 0;
}