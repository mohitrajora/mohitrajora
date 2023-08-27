#include<stdio.h>
int main()
{   int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            if(i>j)
            {
                printf("%d",i);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}