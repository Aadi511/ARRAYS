#include <stdio.h>
int main (){
	int n, i;
	int a[n];
	printf("enter value of n");
	scanf("%d", &n);
	for (i=0; i<n; i++){
	    scanf("%d", a[i]);
	}
	for(i=0;i<n/2; i++){
		int t = a[i];
		a[i]= a[n-i-1];
		a[n-1-i]= t;
	}
	for (i=0; i<n;i++){
		printf("%d", a[i]);
	}
	
	return 0;
}
