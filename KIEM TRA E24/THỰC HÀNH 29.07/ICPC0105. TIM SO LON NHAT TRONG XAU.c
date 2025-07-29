#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int t; scanf("%d", &t);
    getchar();  
    while (t--) {
        char c[10005];
        scanf("%s", c);
        strcat(c, "a"); 
        int so = 0, gtln = -1000000000;
        for (int i = 0; i < strlen(c); i++) {
            if (isdigit(c[i])) {
                so = so * 10 + (c[i] - '0');
            } else {
                if (so > gtln) gtln = so;
                so = 0;
            }
        }
        printf("%d\n", gtln);
    }
}
