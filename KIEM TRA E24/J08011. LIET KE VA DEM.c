#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int a[], int b[], int idx[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (b[j] > b[i] || (b[j] == b[i] && idx[j] < idx[i])) {
                swap(&a[i], &a[j]);
                swap(&b[i], &b[j]);
                swap(&idx[i], &idx[j]);
            }
        }
    }
}

void display(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) printf("%d %d\n", a[i], b[i]);
}

int find(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return i;
    }
    return -1;
}

bool SoKhongGiam(int x) {
    if (x < 10) return true;
    int z = x % 10;
    x /= 10;
    while (x > 0) {
        if (z < x % 10) return false;
        z = x % 10;
        x /= 10;
    }
    return true;
}

int main() {
    int a[10000], b[10000] = {0}, idx[10000], x, n = 0, pos = 0;
    while (scanf("%d", &x) != -1) {
        if (SoKhongGiam(x)) {
            int vt = find(a, n, x);
            if (vt == -1) {
                a[n] = x;
                b[n] = 1;
                idx[n] = pos++;  
                n++;
            } else {
                b[vt]++;
            }
        }
    }
    sort(a, b, idx, n);  
    display(a, b, n);
    return 0;
}

