#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    /*printf("Enter the value of N : ");
    scanf("%d",&a);*/
    int sum(int n);
    printf("Sum of : %d ",sum(5));
    return 0;
}
int sum(int n)
{   if(n==1)
{
    return 1;
}
    int sn1,sn;
    sn1 = sum(n-1);
    sn = sn1+n;
    return n;
}