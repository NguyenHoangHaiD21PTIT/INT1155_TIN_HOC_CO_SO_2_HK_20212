#include<stdio.h>
#include<math.h>
int Prime(int n){
    if(n<=1) return 0;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++) scanf("%d", &a[i][j]);
    }
    int Max = -1e9, row = -1;
    for(int i = 0;i<n;i++){
        int s = 0;//số snt hàng đó
        for(int j = 0;j<n;j++){
            if(Prime(a[i][j])) s++;
        }
        if(s > Max){
            Max = s;
            row = i;
        }
    }
    printf("%d\n", row + 1);
    for(int j = 0;j<n;j++){
        if(Prime(a[row][j])) printf("%d ", a[row][j]);
    }
}