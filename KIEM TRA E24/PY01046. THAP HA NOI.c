#include <stdio.h>
void Try(int n, char a, char b, char c) { 
    if (n == 1) {
        printf("%c -> %c\n", a, c);
        return;
    }
    Try(n - 1, a, c, b);
    printf("%c -> %c\n", a, c);
    Try(n - 1, b, a, c);
}
int main() {
    int n;
    scanf("%d", &n);  
    Try(n, 'A', 'B', 'C');  
}
