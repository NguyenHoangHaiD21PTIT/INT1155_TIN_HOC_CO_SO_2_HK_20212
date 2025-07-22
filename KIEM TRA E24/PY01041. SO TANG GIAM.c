#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool checktang(char s[], int l, int r) {
    for (int i = l; i < r; i++) {
        if (s[i] >= s[i + 1]) return false;
    }
    return true;
}
bool checkgiam(char s[], int l, int r) {
    for (int i = l; i < r; i++) {
        if (s[i] <= s[i + 1]) return false;
    }
    return true;
}
bool check(char s[]) {
    int n = strlen(s);
    if (n < 3) return false;
    for (int i = 1; i < n - 1; i++) {
        if (checktang(s, 0, i) && checkgiam(s, i, n - 1)) return true;
    }
    return false;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[1005];
        scanf("%s", s);
        if (check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
