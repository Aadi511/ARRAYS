#include <stdio.h>
int main(){
    int i, j, n, sum=0;
    printf("Enter value of n");
    scanf("%d", &n);
    int matrix1[n][n];
    int matrix2[3][3];
    int matrix3[3][3];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter element for matrix 1 [%d] [%d]\n", i, j );
            scanf("%d", &matrix1[i][j]);

        }
    }
   
  for(i=0;i<n;i++){
    sum +=matrix1[i][i];
  }
  printf("%d", sum);
    return 0;
}