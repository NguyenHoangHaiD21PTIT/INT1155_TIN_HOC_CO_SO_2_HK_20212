#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char a[20];
		scanf("%s",a);
		if(a[0]==a[strlen(a)-1]) printf("YES\n");
		else printf("NO\n");
	}
}
