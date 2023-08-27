#include<stdio.h>
int main()
{
    int a,rev=0,lastdigit;
    printf("Enter a number = ");
    scanf("%d",&a);                 
    while(a>0)
    {
        lastdigit=a%10;             //to get last digit via reminder
        a=a/10;                     
            rev=rev*10+lastdigit;}
             printf("%d",rev);
       
        return 0;
    

}

/*  step 1: let's take a=24
    step 2: now 24>0 so the loop will run
    step 3: the lastdigit is reminder of 24%10 is 4 so lastdigit = 4
    step 4: now a=24/10 so a=2
    step 5: rev=0+4 = 4 
    step 6: now a=2 and 2>0 so the loop will run again
    step 7: the lastdigit is reminder of 2%10 is 2
    step 8: a = 2/10 = 0
    step 9: rev = 4*10 + 2 = 42 
    BOOM!!!!!!
    */
