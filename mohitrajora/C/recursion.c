#include <stdio.h>
int fact(int);
int main()
{
    printf("%d\n",fact(3));
    return 0;
}
int fact(int n)
{
    int ans=1;
    if (n>0)
    ans=n*fact(n-1);
    return ans;
}