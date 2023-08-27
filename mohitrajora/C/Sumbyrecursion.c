#include<stdio.h>
int sum(int);
int main()
{
    printf("%d",sum(7));
    return 0;
}
int sum(int n)
{
    int ans=0;
    if(n>0)
    ans=n+sum(n-1);
    return ans;
}