#include <stdio.h>
#include <limits.h>
int main() {
    long long x, ans = LLONG_MIN;  
    while (scanf("%lld", &x) != -1) {
        if (x > ans) ans = x;  
    }
    printf("%lld\n", ans);  
}
