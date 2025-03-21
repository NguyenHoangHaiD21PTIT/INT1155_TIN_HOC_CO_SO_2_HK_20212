#include <stdio.h>

int mayMan(long long n) {
    if(!n) return 0;
    while (n) {
        int x = n % 10;
        if (x != 4 && x != 7) return 0;
        n /= 10;
    }
    return 1;
}

int ganMay(long long n) {
    int cnt = 0;
    while (n) {
        int x = n % 10;
        if (x == 4 || x == 7) cnt++;
        n /= 10;
    }
    return mayMan(cnt);
}

int main() {
    long long n;
    scanf("%lld", &n);
    if (ganMay(n)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
