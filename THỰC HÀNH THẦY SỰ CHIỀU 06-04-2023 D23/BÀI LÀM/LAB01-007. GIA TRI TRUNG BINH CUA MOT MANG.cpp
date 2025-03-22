#include<stdio.h>
int main(){
	int N, tong = 0;
	scanf("%d",&N);
	int a[N];
	for(int i = 0;i<N;i++){
		scanf("%d",&a[i]); 
		tong+=a[i];
	}
	printf("%.3f\n", (float)tong / N);
}
