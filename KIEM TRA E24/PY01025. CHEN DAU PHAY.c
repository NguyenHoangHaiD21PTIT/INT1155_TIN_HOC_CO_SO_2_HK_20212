#include <stdio.h>
#include <string.h>
int main() {
    char s[100], res[150];  
    scanf("%s", s);
    int len = strlen(s), du = len % 3, j = 0;  
    if (du != 0) {
        for (int i = 0; i < du; i++) res[j++] = s[i];
        if (len > 3) res[j++] = ',';
    }
    for (int i = du; i < len; i++) {
        res[j++] = s[i];
        if ((i - du + 1) % 3 == 0 && i != len - 1) res[j++] = ',';
    }
    res[j] = '\0';  
    printf("%s", res);
}
