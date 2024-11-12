#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100];  
        scanf("%s", s);
        int len = strlen(s);
        int a[len];
        for (int i = 0; i < len; i++) a[i] = s[i] - '0';
        for (int i = len - 1; i > 0; i--) {
            if (a[i] >= 5) a[i - 1]++;
            a[i] = 0;
        }
        for (int i = 0; i < len; i++) printf("%d", a[i]);
        printf("\n");
    }
}
