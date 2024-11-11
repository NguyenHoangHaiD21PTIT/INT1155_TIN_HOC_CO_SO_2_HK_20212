#include <stdio.h>
int fac(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}
int isK(int n) {
    int org = n, sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += fac(digit);
        n /= 10;
    }
    return sum == org;
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        if (isK(N)) printf("Yes\n");
        else printf("No\n");
    }
}
