#include <stdio.h>
int ucln(int a, int b){
    while (b > 0){
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int sodao(int n){
	int res = 0;
	while(n){
		res = res * 10 + (n%10);
		n/=10;
	}
	return res;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    int a;
	    scanf("%d", &a);
	    if(ucln(a, sodao(a))==1) printf("YES\n");
	    else printf("NO\n");
	}
}
