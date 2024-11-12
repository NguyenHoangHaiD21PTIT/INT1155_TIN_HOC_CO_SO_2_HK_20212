#include <stdio.h>
#include <string.h>
int main() {
    char s[1000], ans[1000] = "";  
    int Max = 0;  
    while (scanf("%s", s) != -1) {
        int len = strlen(s);  
        if (len > Max) {  
            Max = len;  
            strcpy(ans, s);  
        }
    }
    printf("%s - %d\n", ans, Max); 
}

