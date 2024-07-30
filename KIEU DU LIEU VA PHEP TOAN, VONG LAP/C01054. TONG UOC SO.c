#include <stdio.h>
#include <math.h>

int minPrime[2000001] = {};

void era() {
    for (int i = 2; i <= sqrt(2000000); i++) {
        if (!minPrime[i]) {
            for (int j = i * i; j <= 2000000; j += i) {
                if (!minPrime[j]) minPrime[j] = i;
            }
        }
    }
    for (int i = 2; i <= 2000000; i++) {
        if (!minPrime[i]) minPrime[i] = i;
    }
}

int main() {
    era();
    int n;
    scanf("%d", &n);
    long long sum = 0;
    while (n--) {
        int x;
        scanf("%d", &x);
        while (x != 1) {
            sum += minPrime[x];
            x /= minPrime[x];
        }
    }
    printf("%lld", sum);
    return 0;
}
