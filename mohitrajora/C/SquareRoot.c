#include<stdio.h>
#include<math.h>
int main()
{
    double num,squar;
    printf("Enter a number : ");
    scanf("%lf",&num);
    squar=sqrt(num);
    printf("Squar Root of %lf is %lf",num,squar);
    return 0;
}