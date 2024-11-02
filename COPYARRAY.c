#include <stdio.h>
#include <string.h>

int main() {
    int n, i, b, k, j, maxcount=0, count;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    int c[n];
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    } 
    for(i=0;i<n;i++){
       
            c[i] = a[i];
        }
    
    for(i=0;i<n;i++){
        printf("%d ", c[i]);
    }
    return 0;
}
