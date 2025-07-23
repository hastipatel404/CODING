//heap sort
#include <stdio.h>
int main()
{
    int i, j, n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unsorted elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    // Build heap
    for (i = n / 2 - 1; i >= 0; i--)
    {
        for (j = 2 * i + 1; j < n; j = 2 * j + 1)
        {
            if (j + 1 < n && a[j] < a[j + 1])
            {
                j++;
            }
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i = j;
            }
            else
            {
                break;
            }
        }
    }
    // Sort
    for (i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        j = 0;
        while (j < i)
        {
            int largest = j;
            if (2 * j + 1 < i && a[2 * j + 1] > a[largest])
            {
                largest = 2 * j + 1;
            }
            if (2 * j + 2 < i && a[2 * j + 2] > a[largest])
            {
                largest = 2 * j + 2;
            }
            if (largest == j)
            {
                break;
            }
            temp = a[j];
            a[j] = a[largest];
            a[largest] = temp;
            j = largest;
        }
    }
    printf("Sorted elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}