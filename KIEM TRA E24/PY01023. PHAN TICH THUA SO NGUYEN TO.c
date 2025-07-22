#include <stdio.h>
void phantich(long long n) {
    printf("1");  
    for (long long i = 2; i * i <= n; i++) {
        int mu = 0; 
        while (n % i == 0) {
            mu++;
            n /= i;
        }
        if (mu > 0) printf(" * %lld^%d", i, mu); 
    }
    if (n > 1) {
        printf(" * %lld^1", n);
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
