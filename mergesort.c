#include <stdio.h>
void mergesort(int a[], int low, int high);
void merge(int a[], int low, int mid, int high);
int main() {
    int i, a[100], n;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n - 1);
    printf("Sorted array:");
    for (i = 0; i < n; i++) {
        printf("\t%d", a[i]);
    }
    printf("\n");
    return 0;
}
void mergesort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(a, low, mid);      
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);    
    }
}
void merge(int a[], int low, int mid, int high) {
    int i, j, k;
    int leftSize = mid - low + 1;
    int rightSize = high - mid;    
    int left[leftSize], right[rightSize];  
    for (i = 0; i < leftSize; i++)
        left[i] = a[low + i];
    for (j = 0; j < rightSize; j++)
        right[j] = a[mid + 1 + j];  
    i = 0;
    j = 0;
    k = low;
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            a[k] = left[i];
            i++;
        } else {
            a[k] = right[j];
            j++;
        }
        k++;
    }  
    while (i < leftSize) {
        a[k] = left[i];
        i++;
        k++;
    }  
    while (j < rightSize) {
        a[k] = right[j];
        j++;
        k++;
    }
}