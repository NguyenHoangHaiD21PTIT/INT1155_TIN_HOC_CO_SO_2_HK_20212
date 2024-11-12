#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        double tong = 0.0;
        if (n % 2 != 0) {
            for (int i = 1; i <= n; i += 2) tong += 1.0 / i;
        } else {
            for (int i = 2; i <= n; i += 2) tong += 1.0 / i;
        }
        printf("%.6f\n", tong);
    }
}
