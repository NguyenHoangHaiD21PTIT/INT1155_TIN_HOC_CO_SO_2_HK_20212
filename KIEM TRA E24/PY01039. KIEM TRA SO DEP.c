#include <stdio.h>
#include <string.h>

int check1(char s[]) {
    int freq[256] = {0};  
    for (int i = 0; s[i] != '\0'; i++) freq[s[i]]++;
    int dis = 0;
    for (int i = 0; i < 256; i++) if (freq[i] > 0) dis++;
    return dis == 2;
}

int check2(char s[]) {
    int len = strlen(s);
    for (int i = 2; i < len; i++) {
        if (s[i] != s[i - 2]) return 0;
    }
    return 1;  
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100]; 
        scanf("%s", s);
        if (check1(s) && check2(s)) printf("YES\n");
        else printf("NO\n");
    }
}
