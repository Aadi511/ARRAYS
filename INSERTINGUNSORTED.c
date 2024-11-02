#include <stdio.h>
#include <string.h>

int main() {
    int n, i, sum, position,  j;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n+1];
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    } printf("The sorted array is");
    for(i=0;i<n;i++){
    printf("%d ", a[i]);
    };
    printf("Enter number to be inserted");
    scanf("%d", &sum);
   printf("Enter position");
   scanf("%d", &position);
   for(i=n-1; i>position; i--){
    a[i+1] = a[i];
   }
   a[position] = sum;
   printf("New array");
   for(i=0;i<n+1;i++){
    printf("%d ", a[i]);
   }
    return 0;
}
