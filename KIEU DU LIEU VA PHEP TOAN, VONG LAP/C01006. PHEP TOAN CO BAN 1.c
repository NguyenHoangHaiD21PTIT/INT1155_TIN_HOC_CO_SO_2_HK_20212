#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
	ll a, b;
	scanf("%lld%lld", &a, &b);
	
	if(b != 0) {
		ll tong = a + b;
		ll hieu = a - b;
		ll tich = a * b;
		double thuong = (a * 1.0) / (b * 1.0);
		ll chiaDu = a % b;
		printf("%lld %lld %lld %.2lf %lld", tong, hieu, tich, thuong, chiaDu);
	} else {
		printf("0");
	}
	
	return 0;
}
