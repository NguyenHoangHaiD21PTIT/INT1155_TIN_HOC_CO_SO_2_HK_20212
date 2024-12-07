#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        char N[19];  
        scanf("%s", N);  
        int len = strlen(N);  
        if (len % 2 == 1 && len > 1) printf("%c\n", N[len / 2]);        
        else printf("NONE\n");      
    }
}

