//merge sort
#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Unsorted elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    for(k = 1; k < n; k *= 2) {
        for(i = 0; i < n; i += 2 * k) {
            int mid = (i + k < n) ? (i + k) : n;
            int end = (i + 2 * k < n) ? (i + 2 * k) : n;
            int left = i, right = mid, index = i;
            while(left < mid && right < end) {
                if(a[left] <= a[right]) {
                    b[index++] = a[left++];
                } else {
                    b[index++] = a[right++];
                }
            }
            while(left < mid) {
                b[index++] = a[left++];
            }
            while(right < end) {
                b[index++] = a[right++];
            }
        }
        for(i = 0; i < n; i++) {
            a[i] = b[i];
        }
    }
    printf("Sorted elements: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}