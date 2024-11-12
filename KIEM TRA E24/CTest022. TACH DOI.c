#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int t;
    scanf("%d", &t);  
    getchar();
    while (t--) {
        char N[19];  
        scanf("%s", N);  
        int len = strlen(N);  
        if (len % 2 != 0) {
            printf("INVALID\n");
        } else {
            long long left = 0, right = 0;
            for (int i = 0; i < len / 2; i++) left = left * 10 + (N[i] - '0');
            for (int i = len / 2; i < len; i++) right = right * 10 + (N[i] - '0');
            printf("%lld\n", lcm(left, right));
        }
    }
}
