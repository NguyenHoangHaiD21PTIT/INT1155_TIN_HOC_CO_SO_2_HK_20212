#include <stdio.h>

int ucln(int a, int b){
    while (b > 0){
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int checknt(int n){
	if(n<=1) return 0;
	for(int i = 2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int tongcs(int n){
	int tong = 0;
	while(n){
		tong+=n%10;
		n/=10;
	}
	return tong;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    int a, b;
	    scanf("%d %d", &a, &b);
	    int x = ucln(a, b);
	    if(checknt(tongcs(x))) printf("YES\n");
	    else printf("NO\n");
	}
}
