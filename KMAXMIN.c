#include <stdio.h>
int main (){
	int n, i, j;

	printf("enter value of n");
	scanf("%d", &n);
		int a[n];
	for (i=0; i<n; i++){
	    scanf("%d", &a[i]);
	}
	for (i=0; i<n; i++)
	for (j=0; j<n-i; j++){
		if (a[j]>a[j+1])
		{int t = a[j];
		a[j]= a[j+1];
		a[j+1]= t;
		}
	}
	int k;
	printf("Enter value of k");
	scanf("%d", &k);
	printf("%d", a[k-1]);
	printf("\n %d", a[n-k]);
	
	return 0;
}
