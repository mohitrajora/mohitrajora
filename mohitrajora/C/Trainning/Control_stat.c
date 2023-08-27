#include<stdio.h>
int main()
{
  
    float a,e;
    float b,c,d,total;
    printf("Enter the number of units = ");
    scanf("%f",&a);
    if(a<=50)
    {
        b=1;
        c=a*b;
        d=c*(0.18);
        total=c+d;
        printf("Total bill = %f",total);
    }
    else if(50<a && a<=100)
    {
        e=a-50;
        
        b=1.5;
        c=(50) +( e*b);
        d=c*(0.18);
        total=c+d;
        printf("Total bill = %f",total);
    }
    else if(100<a && a<=150)
    {   
        e=a-100;
        b=2;
        c=50+ 1.5*50 +(e*b);
        d=c*(0.18);
        total=c+d;
        printf("Total bill = %f",total);
    }
    else if(150<a && a<=200)
    {   
        e=a-150;
        b=2.5;
        c=50+ (1.5*50) + (2*50)+(e*b);
        d=c*0.18;
        c=c+d;
        printf("Total bill = %f",c);
    }
    else if(a>200)
    {   
        e=a-200;
        b=3;
        c=50+(50*1.5)+(50*2)+(50*2.5)+(e*b);
        d=c*0.18;
        total=c+d;
        printf("Total bill = %f",total);
    }
    
return 0;

}