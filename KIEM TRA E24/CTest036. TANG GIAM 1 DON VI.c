#include <stdio.h>
int main() {
    int t, n = 0;
    scanf("%d", &t);  
    while (t--) {
        char s[4];  
        scanf("%s", s);  
        if (s[1] == '+') n++;  
        else if (s[1] == '-')  n--;  
    }
    printf("%d\n", n);  
}
