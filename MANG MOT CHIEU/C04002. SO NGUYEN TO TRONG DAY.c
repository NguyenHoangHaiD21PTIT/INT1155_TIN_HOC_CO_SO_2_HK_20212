#include <stdio.h>
#include <math.h>
#define ll long long

int check(ll n){
	if(n < 2){
		return 0;
	}
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t = 1;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll a[n];
		for(int i = 0; i < n; i++){
			scanf("%lld", &a[i]);
			if(check(a[i])){
				printf("%lld ", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

