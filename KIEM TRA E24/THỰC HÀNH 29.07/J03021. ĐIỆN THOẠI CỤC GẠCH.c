#include <stdio.h>
#include <string.h>
#include <ctype.h>

char so(char c) {
    if (c == 'a' || c == 'b' || c == 'c') return '2';
    if (c == 'd' || c == 'e' || c == 'f') return '3';
    if (c == 'g' || c == 'h' || c == 'i') return '4';
    if (c == 'j' || c == 'k' || c == 'l') return '5';
    if (c == 'm' || c == 'n' || c == 'o') return '6';
    if (c == 'p' || c == 'q' || c == 'r' || c == 's') return '7';
    if (c == 't' || c == 'u' || c == 'v') return '8';
    if (c == 'w' || c == 'x' || c == 'y' || c == 'z') return '9';
    return c; 
}

int main() {
    int t;
    scanf("%d", &t); getchar(); 
    while (t--) {
        char s[1005];
        scanf("%s", s);
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            s[i] = tolower(s[i]);  
            s[i] = so(s[i]);       
        }
        int is_pal = 1;
        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len - i - 1]) {
                is_pal = 0;
                break;
            }
        }
        if (is_pal) printf("YES\n");
        else printf("NO\n");
    }
}
