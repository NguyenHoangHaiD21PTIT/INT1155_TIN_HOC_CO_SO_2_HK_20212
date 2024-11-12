#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char N[1000];
        scanf("%s", N);
        char max_digit = '0', min_digit = '9';
        for (int i = 0; i < strlen(N); i++) {
            if (N[i] > max_digit) max_digit = N[i];
            if (N[i] < min_digit) min_digit = N[i];
        }
        printf("%c %c\n", max_digit, min_digit);
    }
}
