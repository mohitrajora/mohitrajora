#include<stdio.h>
int main()
{
    int a,rev=0,lastdigit;
    printf("Enter a number = ");
    scanf("%d",&a);                 
    while(a>0)
    {
        lastdigit=a%10;             
        a=a/10;                     
            rev=rev*10+lastdigit;}
             printf("%d",rev);
       
        return 0;
    

}