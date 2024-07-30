#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
	int n;
	scanf("%d", &n);
	int m = n;
	while(n >= 10){
		n = n / 10;
	}
	printf("%d %d", n, m % 10);
	return 0;
}
