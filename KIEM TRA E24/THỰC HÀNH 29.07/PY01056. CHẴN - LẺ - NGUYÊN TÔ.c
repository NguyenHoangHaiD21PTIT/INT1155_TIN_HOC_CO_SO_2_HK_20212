#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int check(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        int digit = s[i] - '0';
        if (i % 2 != digit % 2) return 0;
    }
    return 1;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[1005];
        scanf("%s", s);
        int sum = 0;
        for (int i = 0; i < strlen(s); i++) sum += s[i] - '0';
        if (check(s) && isPrime(sum)) printf("YES\n");
        else printf("NO\n");
    }
}
