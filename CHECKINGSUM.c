#include <stdio.h>
#include <string.h>

int main() {
    int n, i, sum, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    } 
    printf("Enter the sum to be checked: ");
    scanf("%d", &sum);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (sum == a[i] + a[j]) {
                printf("Pair found: %d, %d\n", a[i], a[j]);
                return 1;
            }
        } 
    }
    printf("NO PAIRS\n");
    return 0;
}
