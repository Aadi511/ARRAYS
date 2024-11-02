#include <stdio.h>
int main(){
int n;
	int a[8]={1,2,5,7,3,4,8,100};
	int i, j, sum;
	
		for(j=0; j<7; j=j+2){
			int t=a[j];
			a[j]= a[j+2];
			a[j+2]= t;
		}
	for (i=0; i<8;i++){
		printf("%d", a[i]);
	}
		 return 0;
}
