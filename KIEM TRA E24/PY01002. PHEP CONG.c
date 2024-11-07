#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    getchar();  
    while (t--) {
        char s[100];
        fgets(s, sizeof(s), stdin);
        if ((s[0] - '0') + (s[4] - '0') == (s[8] - '0')) printf("YES\n");
        else printf("NO\n");
    }
}

