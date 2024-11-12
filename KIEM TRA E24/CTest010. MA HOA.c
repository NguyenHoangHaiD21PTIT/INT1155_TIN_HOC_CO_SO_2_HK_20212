#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);  
    getchar();
    while (t--) {
        char s[1000];  
        scanf("%s", s);  
        int cnt = 1;  
        int len = strlen(s);  
        for (int i = 0; i < len; i++) {
            if (s[i] == s[i + 1]) cnt++;  
            else {
                printf("%c%d", s[i], cnt); 
                cnt = 1;  
            }
        }
        printf("\n");  
    }
}
