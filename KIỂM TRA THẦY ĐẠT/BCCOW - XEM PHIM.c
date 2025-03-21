#include <stdio.h>
#include <stdbool.h>

int main() {
    int c, n; 
    scanf("%d %d", &c, &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    bool f[c+1];
    for (int i = 0; i <= c; i++) f[i] = false;
    f[0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = c; j >= a[i]; j--) {
            if (f[j - a[i]] == true) f[j] = true;
        }
    }
    for (int j = c; j >= 0; j--) {
        if (f[j] == true) {
            printf("%d\n", j);
            return 0;
        }
    }
}
