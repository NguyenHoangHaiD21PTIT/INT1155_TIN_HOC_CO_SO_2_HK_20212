#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char a[101], b[101], c[101];
        scanf("%s %s %s", a, b, c);
        printf("%c%c%c\n", a[0], b[0], c[0]);
    }
    return 0;
}
