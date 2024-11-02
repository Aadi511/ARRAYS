#include <stdio.h>
int main(){
	int a[7]={1,2,5,7,3,4,8};
	int i, j, sum;
	sum = 0;
	for (i=0; i<6; i++)
	for (j=0; j<6-i; j++){
		if (a[j]>a[j+1])
		{int t = a[j];
		a[j]= a[j+1];
		a[j+1]= t;
		}
	}
	printf("The minimum is %d \n", a[0]);
	printf("The maximum is %d\n", a[6]);
	for (i=0; i<7; i++){
		sum = sum + a[i];
	} printf("%d", sum/7);
	printf("\n %d", a[3]);
	return 0;
	
}
