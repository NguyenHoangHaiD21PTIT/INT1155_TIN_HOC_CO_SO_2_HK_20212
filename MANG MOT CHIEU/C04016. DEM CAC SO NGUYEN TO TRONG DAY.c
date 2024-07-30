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
	scanf("%d", &t);
	for(int j = 1; j <= t; j++){
		ll n;
		scanf("%lld", &n);
		ll a[1001], cnt[100005];
		for(int i = 0; i < n; i++){
			scanf("%lld", &a[i]);
			cnt[a[i]]++;
		}
		printf("Test %d:\n", j);
		ll max = -1e9;
		for(int i = 0; i < n; i++){
			if(a[i] > max){
				max = a[i];
			}
		}
		for(int i = 0; i <= max; i++){
			if(cnt[i] >= 1 && check(i)){
				printf("%lld xuat hien %lld lan\n", i, cnt[i]);
				cnt[i] = 0;
			}
			
		}	
	}
	return 0;
}
