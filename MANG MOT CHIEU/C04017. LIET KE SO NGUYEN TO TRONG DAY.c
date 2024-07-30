#include <stdio.h>
#include <math.h>
#define ll long long

int check(ll n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int t = 1;
//	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll a[1001], cnt[100005];
		int cnt2 = 0;
		for(int i = 0; i < n; i++){
			scanf("%lld", &a[i]);
//			cnt[a[i]]++;
			if(check(a[i])){
				cnt2++;
			}
		}
		printf("%d ", cnt2);
		for(int i = 0; i < n; i++){
			if(check(a[i])){
				printf("%lld ", a[i]);
//				cnt[a[i]] = 0;
			}
		}
	}
	return 0;
}

