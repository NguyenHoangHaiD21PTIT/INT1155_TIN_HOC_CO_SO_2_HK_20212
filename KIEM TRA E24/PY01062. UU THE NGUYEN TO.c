#include <stdio.h>
#include <math.h>
#include <string.h>

int prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int check(char *s) {
    int cnt = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7') cnt++;
    }
    return cnt > len - cnt;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100];
        scanf("%s", s);
        if (prime(strlen(s)) && check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

