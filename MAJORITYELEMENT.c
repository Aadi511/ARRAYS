#include <stdio.h>
#include <string.h>

int main() {
    int n, i, b, k, j, maxcount=0, count;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    } 
    for(i =0;i<n;i++){
        count = 0;
        for(j=0;j<n;j++){
            if(a[i]== a[j]){
                count++;
            }
           
        }
         if(count>maxcount){
                maxcount=count;
                b = a[i];
            }
    }
    if(maxcount>=n/2){
        printf("%d is the majority number", b);
    }
    else {
        printf("no majority number");
        }
    

    
    return 0;
}
