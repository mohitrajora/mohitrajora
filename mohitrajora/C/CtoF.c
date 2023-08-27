#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter Temperature(in C) : ");
    scanf("%f",&c);
    f=((9.0/5.0)*c)+32; //Remember :[
    printf("Temperature in F : %f",f);
    return 0;
}