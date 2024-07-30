#include <stdio.h>
#include <string.h>

typedef long long ll;

#define MAX_LEN 20

ll MinSum(char a[], char b[]) {
    ll res1 = 0, res2 = 0;
    int len_a = strlen(a);
    int len_b = strlen(b);
    
    for (int i = 0; i < len_a; i++) {
        int x = a[i] - '0';
        if (x == 6) x = 5;
        res1 = res1 * 10 + x;
    }
    
    for (int i = 0; i < len_b; i++) {
        int x = b[i] - '0';
        if (x == 6) x = 5;
        res2 = res2 * 10 + x;
    }
    
    return res1 + res2;
}

ll MaxSum(char a[], char b[]) {
    ll res1 = 0, res2 = 0;
    int len_a = strlen(a);
    int len_b = strlen(b);
    
    for (int i = 0; i < len_a; i++) {
        int x = a[i] - '0';
        if (x == 5) x = 6;
        res1 = res1 * 10 + x;
    }
    
    for (int i = 0; i < len_b; i++) {
        int x = b[i] - '0';
        if (x == 5) x = 6;
        res2 = res2 * 10 + x;
    }
    
    return res1 + res2;
}

void solve() {
    char a[MAX_LEN], b[MAX_LEN];
    scanf("%s %s", a, b);
    printf("%lld %lld\n", MinSum(a, b), MaxSum(a, b));
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
