#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int lower_bound(int arr[], int n, int key) {
    int low = 0, high = n;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] < key) low = mid + 1;
        else  high = mid;
    }
    return low;
}

int upper_bound(int arr[], int n, int key) {
    int low = 0, high = n;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] <= key) low = mid + 1;
        else high = mid;
    }
    return low;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), compare);
    int kq = 0;
    for (int i = 0; i < n - 1; i++) {
        int x1 = lower_bound(a + i + 1, n - i - 1, k - a[i]);
        int x2 = upper_bound(a + i + 1, n - i - 1, k - a[i]);
        int x = x1;
        int y = x2;
        kq += (x2 - 1) - x1 + 1;
    }
    printf("%d\n", kq);
}