#include<stdio.h>
#include<math.h>
int main()
{
    double base,expo,power;
    printf("Enter base : ");
    scanf("%lf",&base);
    printf("Enter Exponent : ");
    scanf("%lf",&expo);
    power = pow(base, expo); // calculate base^expo
    printf("Ans : %lf",power);
    return 0;
}
