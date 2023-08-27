#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Age of Ram : ");
    scanf("%d",&a);
    printf("Enter Age of Shyam : ");
    scanf("%d",&b);
    printf("Enter Age of Ajay : ");
    scanf("%d",&b);
    if(c<a && c<b)
    printf("Ajay is younger");
    else if(b<c && b<a)
    printf("Shyam is younger");
    else if(a<c && a<b)
    printf("Ram is youmger");
    return 0;
}