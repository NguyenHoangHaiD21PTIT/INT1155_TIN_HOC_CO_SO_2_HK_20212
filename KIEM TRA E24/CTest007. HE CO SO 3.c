#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);  
    getchar();  
    while (t--) {
        char s[1000];
        scanf("%s", s);  
        int check = 1; 
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] != '0' && s[i] != '1' && s[i] != '2') {
                check = 0;  
                break;
            }
        }
        if (check == 1) printf("YES\n");
        else printf("NO\n");
    }
}
