#include <stdio.h>
#include <stdlib.h>

int tongCS(int a) {
    int ans = 0;
    while (a) {
        ans += a % 10;
        a /= 10;
    }
    return ans;
}

int cmp(const void *x, const void *y) {
    int a = *(const int *)x;
    int b = *(const int *)y;
    int sumA = tongCS(a);
    int sumB = tongCS(b);
    if (sumA != sumB) {
        if (sumA < sumB) return -1;
        else return 1;
    } else {
        if (a < b) return -1;
        else if (a > b) return 1;
        else return 0;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[10005];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), cmp);
        for (int i = 0; i < n; i++) printf("%d ", a[i]);
        printf("\n");
    }
}
