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
    int l = 0, h= n-1 ,m = (l+h)/2;
    while(1)
    {
        if(key == arr[m])
        {
            printf("Match found at %d position.", m+1);
            break;
        }
        else if(key > arr[m])
        {
            l = m+1;
            m = (l+h)/2;
        }
        else
        {
            h = m-1;
            m = (l+h)/2;
        }
    }
}