#include <stdio.h>
#include <math.h>
#define MAX 1000005

int prime[MAX];

void sieve() {
    for(int i = 0; i < MAX; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    int sq = (int)sqrt(MAX);
    for(int i = 2; i <= sq; i++) {
        if(prime[i]) {
            for(int j = i * i; j < MAX; j += i) prime[j] = 0;
        }
    }
}

int main() {
    int t; scanf("%d", &t);
    sieve();
    while(t--) {
        int n; scanf("%d", &n);
        if (prime[n]) printf("YES\n");
        else printf("NO\n");
    }
}
