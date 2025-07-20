#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char a[101], b[101];  
        scanf("%s %s", a, b);
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        printf("%s %s\n", a, b);
    }
    return 0;
}
