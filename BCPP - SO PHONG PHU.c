#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int cnt = 0;
	int v[b + 5] = {};
    	for(int i = 1;i<=b;i++) v[i] = 1;
	for(int i=2;i<=b;i++){
		for(int j=i;j<=b;j+=i) v[j] +=i;
	}
	for(int i=a;i<=b;i++){
		if(v[i]-i>i) cnt++;
	}
	printf("%d", cnt);
}
