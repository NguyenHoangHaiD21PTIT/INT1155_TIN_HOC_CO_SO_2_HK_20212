#include<stdio.h> 
int main(){ 
	int n; 
	scanf("%d",&n); 
	int a[n];
	for(int i=0;i<n;i++){ 
	   scanf("%d",&a[i]); 
	} 
	int min = a[0]; 
	for(int i=0;i<n;i++){ 
	    if(a[i]<min){ 
	       min = a[i]; 
		} 
	} 
	int min2 = +999999999; 
	for(int i=0;i<n;i++){ 
	   	if(a[i]<min2 && a[i]>min){ 
	      	min2 = a[i]; 
		} 
	} 
	printf("%d %d",min,min2); 
}