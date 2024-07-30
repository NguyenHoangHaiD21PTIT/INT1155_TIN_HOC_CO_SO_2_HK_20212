#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(n % 2 == 0){
			ll ok = 1;
			while(n > 0){
				ll c = n % 10;
				if(c % 2 != 0){
					ok = 0;
					break;
				}
				n = n/10;
			}
			if(ok == 1){
				printf("YES\n");
			} else {
				printf("NO\n");
			}
			
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
