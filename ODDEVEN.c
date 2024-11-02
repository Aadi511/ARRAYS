#include <stdio.h>
#include <string.h>

int main() {
    int n, i, sum, k=0, j=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    int odd[n];
    int even[n];
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    } 
    for(i=0;i<n;i++){
        if (a[i]%2 == 0 ){
            even[k] = a[i];
            k++;
        } else {
            odd[j] = a[i];
            j++;
        }
    }
    for(i=0;i<j;i++){
        printf("Odd %d \n", odd[i]);
    }
    for(i=0;i<k;i++){
        printf("Even %d \n", even[i]);
    }
    return 0;
}
