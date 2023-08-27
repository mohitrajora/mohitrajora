#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    // sum = 1 + 2 + 3 + ...... + n
    //Runs in linear time
    /*for(int i=1;i<=n;i++)
    {
        sum+=i;
        
    }
    printf("%d",sum);*/
    // Runs in constant time
    sum = (n*n+n)/2;
    printf("%d",sum);
    return 0;
}