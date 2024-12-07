#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check(char s[]) {
    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        if (!isdigit(s[i])) return 0;
        if (s[i] != '0' && s[i] != '1' && s[i] != '2') return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        char s[501];
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';
        if (check(s)) printf("YES\n");
        else printf("NO\n");
    }
}

