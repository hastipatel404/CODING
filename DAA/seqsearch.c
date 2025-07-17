#include<stdio.h>
int main()
{
    int n;
    printf("Please enter the total number of array elements:");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("\nPlease enter array elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements are:");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    int key;
    printf("\nPlease enter the key element:");
    scanf("%d", &key);
    for(i=0; i<n; i++)
    {
        if(key == arr[i])
        printf("Element is found at %d position.", (i+1));
    }
}