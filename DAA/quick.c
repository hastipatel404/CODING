//quick sort
#include<stdio.h>
void quick_sort(int a[], int low, int high)
{
    int i, j, pivot, temp;
    if(low < high)
    {
        pivot = a[low];
        i = low + 1;
        j = high; 
        while(i <= j)
        {
            while(i <= high && a[i] <= pivot)
                i++;
            while(a[j] > pivot) 
                j--;
            if(i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        a[low] = a[j];
        a[j] = pivot;
        quick_sort(a, low, j - 1);
        quick_sort(a, j + 1, high);
    }
}
int main()
{
    int i, j, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Unsorted elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    quick_sort(a, 0, n-1);
    printf("Sorted elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}