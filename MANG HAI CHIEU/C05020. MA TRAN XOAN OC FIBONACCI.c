#include <stdio.h>

long long f[90]; 

void gen() {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 89; i++) {
        f[i] = f[i - 2] + f[i - 1];
    }
}

int main() {
    gen();
    int n;
    scanf("%d", &n);
    int a[n][n];
    int d = 0, giatri = 0;
    int hang = n - 1, cot = n - 1;
    while (d <= n / 2) {
        for (int i = d; i <= cot; i++) a[d][i] = f[giatri++];
        for (int i = d + 1; i <= hang; i++) a[i][cot] = f[giatri++];
        for (int i = cot - 1; i >= d; i--) a[hang][i] = f[giatri++];
        for (int i = hang - 1; i > d; i--) a[i][d] = f[giatri++];
        d++;  hang--; cot--;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%lld ", a[i][j]);
        printf("\n");
    }
}
