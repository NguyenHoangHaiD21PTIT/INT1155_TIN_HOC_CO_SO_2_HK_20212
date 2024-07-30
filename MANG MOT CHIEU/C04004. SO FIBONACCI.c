#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int t = 1;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll fibo[93] = {0};
		fibo[0] = 0;
		fibo[1] = 1;
		for(ll i = 2; i < 93; i++){
			fibo[i] = fibo[i - 1] + fibo[i - 2];
		}
		printf("%lld\n", fibo[n]);
	}
	return 0;
}

