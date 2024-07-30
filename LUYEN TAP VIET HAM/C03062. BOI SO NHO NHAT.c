#include<stdio.h>
long long BCNN(long long a, long long b){
	long long n = a *b;
	while(b!=0){
		long long c = a % b;
		a = b;
		b = c;
	}	
	return n/a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, m;
		scanf("%lld%lld", &n, &m);
		long long res = n;
        for(int i = n + 1;i<=m;i++) res = BCNN(res, i);
        printf("%lld\n", res);
	}
}
