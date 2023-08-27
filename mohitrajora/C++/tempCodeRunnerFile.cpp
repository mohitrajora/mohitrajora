#include<iostream>
int main()
{ int i,num,mul=1;
    std::cout<<"enter the value of num = ";
    std::cin>>num;
    for(i=1;i<=num;i++)
    {
        mul=mul*i;
    } std::cout<<mul;
      return 0;
}