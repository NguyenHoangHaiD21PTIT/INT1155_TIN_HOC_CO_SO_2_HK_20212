#include <stdio.h>
#include <string.h>

int check(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) return 0; 
    }
    return 1; 
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char a[501], b[501];
        scanf("%s %s", a, b); 
        if(check(a) + check(b) == 1) printf("YES\n");
        else printf("NO\n");
    }
}
