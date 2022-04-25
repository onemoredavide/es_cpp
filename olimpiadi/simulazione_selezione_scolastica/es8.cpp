#include <stdio.h>
int mat[10][10][10];
main() {
    int i,j,k;
    for (i=0;i<10;i++)
        for (j=0;j<10;j++)
            for (k=0;k<10;k++)
                mat[i][j][k]=i+j+k;
    for (i=0;i<10;i++)
        printf("%d ",mat[i][i][i]);
}