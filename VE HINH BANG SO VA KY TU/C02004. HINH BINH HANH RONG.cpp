#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf("~");
        if (i == 0 || i == n - 1) {
            for (int j = 0; j < n; j++) printf("*");
        } else {
            printf("*");  
            for (int j = 0; j < n - 2; j++) printf(".");
            printf("*");  
        }
        printf("\n");  
    }
}

