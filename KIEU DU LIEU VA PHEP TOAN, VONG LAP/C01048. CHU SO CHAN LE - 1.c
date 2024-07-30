#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int t = 1;
//	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll cntC = 0;
		ll cntL = 0;
		while(n > 0){
			if((n % 10) % 2 == 0){
				cntC++;
			}else{
				cntL++;
			}
			n = n / 10;
		}
		printf("%lld %lld", cntL, cntC);
	}
	return 0;
}
