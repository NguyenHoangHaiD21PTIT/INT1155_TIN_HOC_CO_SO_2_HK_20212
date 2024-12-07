#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    scanf("%s", s);
    int cnt[100] = {0}, appeared[100] = {0}, n = strlen(s);
    if (n % 2 != 0) n--;
    for (int i = 0; i <= n - 2; i += 2) {
        int x = s[i] - '0', y = s[i + 1] - '0';
        int so = x * 10 + y;
        cnt[so]++;
    }
    for (int i = 0; i <= n - 2; i += 2) {
        int x = s[i] - '0', y = s[i + 1] - '0';
        int so = x * 10 + y;
        if (!appeared[so]) {
            printf("%d %d\n", so, cnt[so]);
            appeared[so] = 1;
        }
    }
    return 0;
}

