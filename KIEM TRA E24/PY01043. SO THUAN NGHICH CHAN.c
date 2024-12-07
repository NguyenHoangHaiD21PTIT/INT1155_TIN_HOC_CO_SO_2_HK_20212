#include <stdio.h>
#include <string.h>

int isPalindrome(int n) {
    int temp = n, reverse = 0;
    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);
        temp /= 10;
    }
    return n == reverse;
}

int isAllEvenDigits(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) return 0;
        n /= 10;
    }
    return 1;
}

int isEvenLength(int n) {
    int length = 0;
    while (n > 0) {
        length++;
        n /= 10;
    }
    return length % 2 == 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int N;
        scanf("%d", &N);
        for (int i = 22; i < N; i++) {
            if (isPalindrome(i) && isAllEvenDigits(i) && isEvenLength(i)) printf("%d ", i);
        }
        printf("\n");
    }
}

