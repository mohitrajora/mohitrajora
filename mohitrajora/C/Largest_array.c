#include<stdio.h>
int maxarr(int array[], int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    return max;

}
int main()
{   
    int arr[] = {1,3,4543,6453,5463524,324,54,6254};
    int max = maxarr(arr,8);
    printf("Largest element in array is %d", max);
    return 0;
}