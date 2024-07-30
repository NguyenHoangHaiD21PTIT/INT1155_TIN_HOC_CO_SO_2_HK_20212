#include<stdio.h>
int main(){
  int t;
  scanf("%d", &t);
  while(t--){
  	int n;
  	scanf("%d", &n);
  	int tong = 0;
  	while(n){
  		tong+=n%10;
  		n/=10;
  	}
  	printf("%d\n", tong);
  }
}
