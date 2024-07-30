#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int t1 = 1;t1<=t;t1++){
        int n;
        scanf("%d", &n);
        int a[n][n];
        int d = 0, giatri = n * n;
        int hang = n - 1, cot = n - 1;
        while (d <= n / 2) {
            for (int i = d; i <= cot; i++) a[d][i] = giatri--;
            for (int i = d + 1; i <= hang; i++) a[i][cot] = giatri--;
            for (int i = cot - 1; i >= d; i--) a[hang][i] = giatri--;
            for (int i = hang - 1; i > d; i--) a[i][d] = giatri--;
            d++;  hang--; cot--;
        }
        printf("Test %d: \n", t1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) printf("%d ", a[i][j]);
            printf("\n");
        }
    }
}
