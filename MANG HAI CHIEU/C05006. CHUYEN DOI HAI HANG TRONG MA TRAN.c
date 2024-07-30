#include <stdio.h>
#include <math.h>
#define ll long long

int main(){
	int t = 1;
//	scanf("%d", &t);
	while(t--){
		int n, m, p, q;
		scanf("%d%d", &n, &m);
		int a[101][101];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		
		scanf("%d%d", &p, &q);
		
		for(int j = 0; j < m; j++){
				int tmp = a[p - 1][j];
				a[p - 1][j] = a[q - 1][j];
				a[q - 1][j] = tmp;
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
