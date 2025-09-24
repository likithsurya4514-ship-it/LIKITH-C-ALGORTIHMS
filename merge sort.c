

#include <stdio.h>
void merge(int a[], int l, int m, int h, int b[]) {
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= h) 
	{
        if (a[i] < a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }

    while (i <= m) {
        b[k++] = a[i++];
    }
    while (j <= h) {
        b[k++] = a[j++];
    }
    for (i = l; i <= h; i++) {
        a[i] = b[i];
    }
}
void mergesort(int a[], int l, int h, int b[]) {
    if (l < h) {
        int m = (l + h) / 2;
        mergesort(a, l, m, b);
        mergesort(a, m + 1, h, b);
        merge(a, l, m, h, b);
    }
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n); 
    int a[n], b[n];
    printf("\nEnter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n - 1, b);
     for (int i = 0; i < n; i++) 
	 {
        printf("%d ", a[i]);
    }
    return 0;
}