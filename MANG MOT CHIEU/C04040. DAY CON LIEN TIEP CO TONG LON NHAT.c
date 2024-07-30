#include <stdio.h>
#define MAX_N 100000 
int main() {
    int t;
    scanf("%d", &t); 
    while(t--) {
        int n;
        scanf("%d", &n); 
        int a[MAX_N];
        for(int i = 0; i < n; i++)  scanf("%d", &a[i]); 
        long long tong = 0, tongmax = -1000000000; 
        for(int i = 0; i < n; i++) {
            tong = tong + a[i]; 
            if(tong > tongmax) tongmax = tong; 
            if(tong < 0) tong = 0;     
        }
        printf("%lld\n", tongmax); 
    }
}

