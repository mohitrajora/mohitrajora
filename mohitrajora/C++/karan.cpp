#include<iostream>
int main()
{int num,i,sum=0;
   std::cout<<"enter the value of num";
    std::cin>>num;
    for(i=1;i<=num;i++)
    {
        sum+=i;
    }std::cout<<sum;
    return 0;
}