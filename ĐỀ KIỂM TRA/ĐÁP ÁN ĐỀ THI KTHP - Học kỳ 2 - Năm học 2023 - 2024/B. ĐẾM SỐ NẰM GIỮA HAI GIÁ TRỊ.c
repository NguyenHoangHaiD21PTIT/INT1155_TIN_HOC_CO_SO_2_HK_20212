#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int a[100]; 
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int x, y;
    scanf("%d %d", &x, &y);
    x--; y--;
    int mn = a[x] < a[y] ? a[x] : a[y], mx = a[x] > a[y] ? a[x] : a[y], cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > mn && a[i] < mx) cnt++;
    }
    printf("%d", cnt);
}
