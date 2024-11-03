#include <stdio.h>
int main(){
    int i, j, n, sum=1;
    printf("Enter value of n");
    scanf("%d", &n);
    int matrix1[n][n];
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter element for matrix 1 [%d] [%d]\n", i, j );
            scanf("%d", &matrix1[i][j]);

        }
    }
   
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if((i==j && matrix1[i][j] != 1)|| ( i!=j && matrix1[i][j] != 0)){
            sum = 0;
            break;
        }
    }
    if (!sum){
        break;
    }
  }
  if (sum){
    printf("Identity matrix");
  } else printf("Not identity matrix");
    return 0;
}