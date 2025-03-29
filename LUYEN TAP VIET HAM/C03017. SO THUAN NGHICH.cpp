#include <stdio.h>
#include <string.h>
int check(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) return 0; 
    }
    return 1; 
}

int main() {
    int t;
    scanf("%d\n", &t);  
    while (t--) {
		char a[501]; 
        gets(a);
        if (check(a)) printf("YES\n"); 
        else printf("NO\n");
    }
}

