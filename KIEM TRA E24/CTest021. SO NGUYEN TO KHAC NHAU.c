#include<stdio.h>
int check(int n){
	if(n <= 1) return 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
void sx(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n], res[10000], cnt[10000], dem = 0;
		for(int i = 0;i < 2000; i++) cnt[i] = 0;
		for(int i = 0;i < n; i++) scanf("%d", &a[i]);
		for(int i = 0;i < n; i++){
			if(check(a[i]) && !cnt[a[i]]){
				res[dem] = a[i];
				cnt[a[i]] = 1;
				dem++;
			}
		}
		sx(res, dem);
		for(int i = 0; i < dem; i++) printf("%d ", res[i]);
		printf("\n");
	}
}
/*
2
9
2 7 7 2 12 8 5 4 888
9
2 7 7 2 12 8 5 4 888
*/

