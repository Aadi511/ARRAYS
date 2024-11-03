#include <stdio.h>
int main(){
    int i, j, k;
    int matrix1[3][3];
    int matrix2[3][3];
    int matrix3[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element for matrix 1 [%d] [%d]\n", i, j );
            scanf("%d", &matrix1[i][j]);

        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element for matrix 2 [%d] [%d]\n", i, j );
            scanf("%d", &matrix2[i][j]);

        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matrix3[i][j]=0;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
            matrix3[i][j] += matrix1[i][k] + matrix2[k][j];
        }
    }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matrix3[i][j]);
        } printf("\n");
    }
    return 0;
}