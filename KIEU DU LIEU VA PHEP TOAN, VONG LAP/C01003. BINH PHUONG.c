#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll res = n * n;
		printf("%lld\n", res);
	}
	return 0;
}
