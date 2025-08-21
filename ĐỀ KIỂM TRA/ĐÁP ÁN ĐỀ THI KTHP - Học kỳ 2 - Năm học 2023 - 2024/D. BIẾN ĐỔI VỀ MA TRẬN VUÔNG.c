#include <stdio.h>

#define MAX 105  // giả sử N, M ≤ 100
int a[MAX][MAX], r[MAX], c[MAX];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    }
    //r[i] = 1 (0 - indexed): Giữ dòng thứ i, c[i] = 1: Giữ cột thứ i
    // fill(r, r+n, 1);
    for (int i = 0; i < n; i++) r[i] = 1;
    for (int j = 0; j < m; j++) c[j] = 1;
    if (n > m) {
        int k = n - m, t = 0;//k: Số hàng cần loại bỏ, t: Số hàng đã loại
        for (int i = 0; i < n && t < k; i++) {
            if ((i + 1) % 2 == 1) {
                r[i] = 0;
                t++;
            }
        }
    } else if (m > n) {
        int k = m - n, t = 0;
        for (int j = 0; j < m && t < k; j++) {
            if ((j + 1) % 2 == 0) {
                c[j] = 0;
                t++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (r[i]) {
            for (int j = 0; j < m; j++) {
                if (c[j]) printf("%d ", a[i][j]);
            }
            printf("\n"); 
        }
    }
}
