#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int low, int high) {
    int p = a[low];  
    int i = low;
    int j = high;
    
    while (i < j)
	 {
        while (a[i] <= p && i <= high - 1) 
		{
            i++;
        }
        while (a[j] > p && j > low) {  
            j--;
        }
        if (i < j)
		 {
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[low], &a[j]);
    return j;
}

void quicksort(int a[], int low, int high) {
    if (low < high) 
	{
        int p = partition(a, low, high);
        quicksort(a, low, p - 1);
        quicksort(a, p + 1, high);
    }
}

int main() {
    int n, i;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];
    
    printf("\nEnter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("\nThe sorted list is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}