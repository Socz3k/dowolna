#include <stdio.h>
#define ROW1 2
#define COL1 3
#define ROW2 3
#define COL2 2
<<<<<<< HEAD
#define NAJNOWSZAZMIANA 1
=======
#define NOWAZMIANA 2
>>>>>>> remotes/origin/drugi

int main()
{
    int i,j,k;
    int A[ROW1][COL1]={{2,1,3},{2,6,5}};
    int B[ROW2][COL2]={{3,2,},{1,4},{3,2}};
    int W[ROW1][COL2];
    W[i][j]=0;
    for(i=0;i<ROW1;i++)
        {
        for(j=0;j<COL2;j++)
            {
            W[i][j]=0;
            for(k=0;k<COL1;k++)
                W[i][j]=W[i][j]+A[i][k]*B[k][j];
            }
        }
    for(i=0;i<ROW1;i++)
        {
        for(j=0;j<COL2;j++)
            printf("%d ",W[i][j]);
        puts("");
        }
    return 0;
}