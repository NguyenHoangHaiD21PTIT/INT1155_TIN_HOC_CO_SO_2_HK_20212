#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int check(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len - 1; i++) {
        if (abs((s[i] - '0') - (s[i + 1] - '0')) != 1) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);  
    getchar();  
    while (t--) {
        char s[20];  
        fgets(s, sizeof(s), stdin);  
        s[strcspn(s, "\n")] = '\0';
        if (check(s) == 1) printf("YES\n");
        else printf("NO\n");
    }
}

