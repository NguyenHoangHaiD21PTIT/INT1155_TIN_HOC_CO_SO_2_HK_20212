#include <stdio.h>
void phantich(long long n) {
    printf("%lld = ", n);
    int first = 1; 
    for (long long i = 2; i * i <= n; i++) {
        int mu = 0; 
        while (n % i == 0) {
            mu++;
            n /= i;
        }
        if (mu > 0) {
            if (!first) printf(" * "); 
            printf("%lld^%d", i, mu);
            first = 0; 
        }
    }
    if (n > 1) {
        if (!first) printf(" * ");
        printf("%lld^1", n);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        long long n;
        scanf("%lld", &n);
        phantich(n);
    }
}

