#include <stdio.h>
#include <string.h>

int main() {
    int n, i, sum, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n+1];
    printf("Enter the sorted array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    } printf("The sorted array is");
    for(i=0;i<n;i++){
    printf("%d ", a[i]);
    };
    printf("Enter number to be inserted");
    scanf("%d", &sum);
    a[n] = sum;
   	for (i= n-1; i>=0 && a[i]> sum; i--){
        a[i+1] = a[i];
    }
    a[i+1] = sum;
	
    printf("The new array is");
    for(i=0;i<n+1;i++)
{
    printf("%d\n", a[i]);
}
    return 0;
}
