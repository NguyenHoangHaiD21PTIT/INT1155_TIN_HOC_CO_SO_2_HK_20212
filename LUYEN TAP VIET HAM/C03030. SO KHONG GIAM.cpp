#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool check(int a) {
    int k = a % 10;
    a = a / 10;
    while (a > 0) {
        if (a % 10 > k) return false;
        k = a % 10;
        a = a / 10;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t); 
    while(t--) {
        int n;
        scanf("%d", &n);
        int start = pow(10, n - 1);
        int end = pow(10, n) - 1;
        for (int i = start; i <= end; i++) {
            if (check(i)) printf("%d ", i);
        }
        printf("\n"); 
    }
}
