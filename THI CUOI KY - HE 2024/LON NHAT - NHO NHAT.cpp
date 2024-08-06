#include <stdio.h>
#include <string.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a * b/ gcd(a, b);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char N[19]; 
        scanf("%s", N);
        int half = strlen(N) / 2;
        long long x1 = 0, x2 = 0;
        for(int i = 0;i<half;i++) x1 = x1 * 10 + (N[i] - '0');
        for(int i = half;i<strlen(N);i++) x2 = x2 * 10 + (N[i] - '0');
        printf("%lld %lld\n", gcd(x1, x2), lcm(x1, x2));
    }
}
