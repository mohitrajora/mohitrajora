#include <stdio.h>

int fact(int n);
int main(){
    
    printf("%d",fact(3));

    
    return 0;
}
int fact(int n){int f=1;
    if(n>0){
        f=n*fact(n-1);

    }return f;
}