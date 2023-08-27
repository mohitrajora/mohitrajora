#include<stdio.h>
int main()
{
    int i,j;
    /*for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;*/
   // int k=0;
   int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    /*for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;*/

    for (i=1;i<=rows;i++)
    {
        for(j=1;j<=2*rows-1;j++)
        {
            if(j>=rows-(i-1) && j<=rows+(i-1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}