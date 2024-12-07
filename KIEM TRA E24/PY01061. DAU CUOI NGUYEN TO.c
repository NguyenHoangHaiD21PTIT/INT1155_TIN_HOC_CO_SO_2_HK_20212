#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[505];
        scanf("%s", s);
        int len = strlen(s);
        int x1 = (s[0] - '0') * 100 + (s[1] - '0') * 10 + (s[2] - '0');
        int x2 = (s[len - 3] - '0') * 100 + (s[len - 2] - '0') * 10 + (s[len - 1] - '0');
        if (is_prime(x1) && is_prime(x2)) printf("YES\n");
        else printf("NO\n");
    }
}

