#include<stdio.h>
int main()
{
    int a, i, j, temp;
    printf("Please enter the total numbers of array:");
    scanf("%d", &a);
    int arr[a];
    printf("\nPlease enter array elements:");
    for(i=0; i<a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nUnsorted array elements are:");
    for(i=0; i<a; i++)
    {
        printf("%d ", arr[i]);
    }
    for(j=0; j<a; j++)
    {
        for(i=0; i<a; i++)
        {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp; 
        }
        }
    }
    printf("\nSorted array elements are:");
    for(i=0; i<a; i++)
    {
        printf("%d ", arr[i]);
    }
}