#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], f[n];
    for(int i = 0;i<n;i++) scanf("%d", &a[i]);
    f[0] = 1; int max = 0;
    for(int i = 1;i<n;i++){
        if(a[i]>=a[i - 1]) f[i] = f[i - 1] + 1;
        else f[i] = 1;
    }
    for(int i = 0;i<n;i++){
        if(f[i]> max) max = f[i];
    }
    printf("%d", max);
}