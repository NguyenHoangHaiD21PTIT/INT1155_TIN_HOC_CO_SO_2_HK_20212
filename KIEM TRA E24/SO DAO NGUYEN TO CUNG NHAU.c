#include <stdio.h>
#include <string.h>
#include <math.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        char a[20];  
        scanf("%s", a);  
        int len = strlen(a);
        char n[20];
        for (int i = 0; i < len; i++) n[i] = a[len - i - 1];
        n[len] = '\0';  
        int b = atoi(a), c = atoi(n);
        if (gcd(b, c) == 1) printf("YES\n");
        else printf("NO\n");
    }
}

