#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100005], st[100005]; 
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int top = -1; 
    for (int i = 0; i < n; i++) {
        if (top == -1) st[++top] = a[i]; 
        else {
            if ((a[i] + st[top]) % 2 == 0) top--; // pop
            else st[++top] = a[i]; // push
        }
    }
    printf("%d\n", top + 1);
}
