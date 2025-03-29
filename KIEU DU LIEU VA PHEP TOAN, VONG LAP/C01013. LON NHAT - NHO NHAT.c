#include <stdio.h>
#include <limits.h>
int main() {
    long long x, max_val = LLONG_MIN, min_val = LLONG_MAX;
    while (scanf("%lld", &x) != -1) {  
        if (x > max_val) max_val = x;  
        if (x < min_val) min_val = x;  
    }
    printf("%lld %lld", max_val, min_val);
}

