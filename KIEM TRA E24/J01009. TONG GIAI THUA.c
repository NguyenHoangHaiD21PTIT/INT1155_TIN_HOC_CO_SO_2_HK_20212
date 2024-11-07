#include <stdio.h>
long long gt(long long n) {
    long long ans = 1;
    for (long long i = 1; i <= n; i++) ans *= i;
    return ans;
}

int main() {
    long long n;
    scanf("%lld", &n);
    long long ans = 0;
    for (long long i = 1; i <= n; i++) ans += gt(i);
    printf("%lld\n", ans);
}
