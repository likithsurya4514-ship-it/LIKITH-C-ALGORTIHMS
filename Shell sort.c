#include <stdio.h>
void shellsort(int a[], int n)
 {
    int gap, key, i, j;
    for (gap = n / 2; gap >= 1; gap /= 2)
	 {
        for (i = gap; i < n; i++)
		 {
            key = a[i]; 
            j = i - gap; 
            while (j >= 0 && a[j] > key)
			 { 
                a[j+gap] = a[j]; 
                j=j-gap; 
            }
            a[j+gap] = key; 
        }
    }
    printf("The sorted array elements: ");
    for (i = 0; i < n; i++)
	 {
        printf("%d ", a[i]);
    }
}
int main()
 {
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
	 {
        scanf("%d", &a[i]);
    }
    shellsort(a, n);
    return 0;
}
