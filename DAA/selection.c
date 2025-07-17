#include <stdio.h>
int main()
{
    int a, i, j, min_idx, temp;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter array elements:\n");
    for (i = 0; i < a; i++)
        scanf("%d", &arr[i]);
    printf("\nUnsorted array:\n");
    for (i = 0; i < a; i++)
        printf("%d ", arr[i]);
    printf("\n");
    for (i = 0; i < a - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < a; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    printf("Sorted array:\n");
    for (i = 0; i < a; i++)
        printf("%d ", arr[i]);
    printf("\n");
}