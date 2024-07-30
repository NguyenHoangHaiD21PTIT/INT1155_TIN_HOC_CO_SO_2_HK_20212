#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int t = 1;
//	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll tich = 1;
		while(n > 0){
			tich *= (n % 10);
			n = n / 10;
		}
		printf("%lld", tich);
	}
	return 0;
}
