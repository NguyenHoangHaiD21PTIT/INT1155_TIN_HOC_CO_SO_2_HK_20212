#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[1001];  
        scanf("%s", s);
        int len = strlen(s);
        qsort(s, len, sizeof(char), (int (*)(const void*, const void*)) strcmp);
        int pos = -1;
        for (int i = 0; i < len; i++) {
            if (s[i] != '0') {
                pos = i;
                break;
            }
        }
        if (pos == -1) printf("0");
        else {
            for (int i = pos; i < len; i++) printf("%c", s[i]);
        }
        printf("\n");
    }
}
