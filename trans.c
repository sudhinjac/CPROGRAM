#include<stdio.h>

#define M 3
#define N 4

void trans(int A[][N],int B[][M]){

    int i,j;
    for (i=0; i <N; i++){
        for (j=0; j<M; j++){
            B[i][j] = A[j][i];
        }
    }
}

int main(){

    int A[M][N];
    int i,j;
    for ( i=0; i<M; i++) {
       for (j=0; j<N; j++){
        printf("Enter %d row %d column number:\n",i,j);
        scanf("%d",&A[i][j]);
       }

    }
int B[N][M];
trans(A,B);
for (i=0; i<N; i++){
    for (j=0; j<M; j++)
    printf("%d  ",B[i][j]);
    printf("\n");
}
return 0;
}