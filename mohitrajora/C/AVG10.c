// C Program to Read 10 Numbers and Find their Sum and Average
#include <stdio.h>
int main(){
    int num, sum = 0;
    float avg;
    
    // Asking for input
    printf("Enter the 10 numbers: \n");
    for (int i = 1; i <= 10; i++){
        printf("Number %d = ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    
    // Calculating average
    avg = sum / 10;
    
    // Displaying output
    printf("Sum of 10 numbers: %d\n", sum);
    printf("Average of 10 numbers: %.2f", avg);
    
    return 0;
}