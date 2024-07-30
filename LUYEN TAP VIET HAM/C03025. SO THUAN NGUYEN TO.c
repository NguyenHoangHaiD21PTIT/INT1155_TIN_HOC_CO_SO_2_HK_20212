#include <stdio.h>
#include <math.h>

int Prime(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int Check(int n){
    int sum = 0;
    while (n > 0){
        int x = n % 10;
        sum += x;
        if (x != 2 && x != 3 && x != 5 && x != 7) return 0;
        n /= 10;
    }
    if (Prime(sum)) return 1;
    return 0;
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int l, r;
        scanf("%d %d", &l, &r);
        int d = 0;
        for (int i = l; i <= r; i++){
            if (Check(i)){
                if (Prime(i))d++;
            }
        }
        printf("%d\n", d);
    }
    return 0;
}
