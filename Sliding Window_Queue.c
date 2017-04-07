/* Sliding Window Maximum.
C program to find the maximum for each and every contiguous subarray of size k in a given array.*/
#include<stdio.h>
void printmax(int arr[],int n,int k)
{
    int j, max;
    printf("Intial Array is:\n");
    for(j=0;j<n;j++)
    {
    printf("%d ",arr[j]);
    }
    printf("\n");
    for (int i = 0;i<= n-k;i++)
    {
        max = arr[i];
        for (j = 1; j < k; j++)
        {
            if (arr[i+j]> max)
               max = arr[i+j];
        }
        printf("%d ", max);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    printmax(arr,n,k);
    return 0;
}