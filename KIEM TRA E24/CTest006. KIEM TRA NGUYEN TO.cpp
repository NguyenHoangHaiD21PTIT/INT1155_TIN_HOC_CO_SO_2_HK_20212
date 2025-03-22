#include<stdio.h>
int check(int n){
	if(n<=1) return 0;
	for(int i = 2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++) scanf("%d", &a[i][j]);
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(check(a[i][j])) printf("1 ");
			else printf("0 ");
		}
		printf("\n");
	}
}
	
