#include<stdio.h>
int main()
{
    int num,i,c;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        c=num*i;
        printf("%d\n",c);
    }
    return 0;
}