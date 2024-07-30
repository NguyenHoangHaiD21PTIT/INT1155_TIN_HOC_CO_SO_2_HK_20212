#include <stdio.h>
#include <string.h>

#define MAX_LEN 52
#define ALPHABET_LEN 26

typedef struct {
    char c;
    int firstpos;
    int lastpos;
} ChuCai;

int doIntersect(int a, int b, int c, int d) {
    return (a < c && c < b && b < d) || (c < a && a < d && d < b);
}

int main() {
    char s[MAX_LEN + 1];
    scanf("%s", s);
    ChuCai a[ALPHABET_LEN];

    for (char c = 'A'; c <= 'Z'; c++) {
        int x = -1, y = -1;
        for (int i = 0; i < MAX_LEN; i++) {
            if (s[i] == c) {
                if (x == -1) {
                    x = i;
                } else {
                    y = i;
                    break;
                }
            }
        }
        a[c - 'A'] = (ChuCai){c, x, y};
    }

    int res = 0;
    for (int i = 0; i < ALPHABET_LEN - 1; i++) {
        for (int j = i + 1; j < ALPHABET_LEN; j++) {
            int x = a[i].firstpos;
            int y = a[i].lastpos;
            int z = a[j].firstpos;
            int t = a[j].lastpos;
            if (doIntersect(x, y, z, t)) {
                res++;
            }
        }
    }

    printf("%d\n", res);
    return 0;
}
