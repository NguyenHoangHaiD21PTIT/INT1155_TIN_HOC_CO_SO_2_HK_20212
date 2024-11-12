#include <stdio.h>
int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) break;
        int a[1000], size = 0; 
        a[size++] = n;
        while (n != 1) {
            if (n % 2 == 0) n /= 2;
            else n = n * 3 + 1;
            a[size++] = n;  
        }
        printf("%d\n", size);
    }
}
