#include <stdio.h>

void deleteMatrix(int*** ptab, int n)
{
    int i;
    for (i=i; i<n; i++)
    free(*ptab);
    *ptab=NULL;
}

int** createMatrix(int n)
{
    int **tab = malloc (n*sizeof(int*));
    if (!tab)
        return NULL;
    int i;
    for (i=0; i<n; i++)
    {
        tab[i]=malloc (n*sizeof(int));
        if(!tab[i])
        {
            deleteMatrix(&tab, i);
            return NULL;
        }
    }
    return tab;
}

void fillMatrix(int** tab, int n)
{
    int i, j, M;
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            tab[i][j]=M++;
        }
    }
}

void copyMatrix(int*** pdest, int** src, int n)
{
    int **dest =createMatrix(n);
    if (dest)
    {
        int i, j;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                dest[i][j]=src[i][j];
            }
        }
    }
    (*pdest)=dest;
}

int main()
{
    int r=10;
    int **matrix;
    int **matrix2;
    matrix=createMatrix(r);
    fillMatrix(matrix, r);
    if (matrix)
    {
        copyMatrix(&matrix2, matrix, r);
        if (matrix2)
        {
            int i, j;
            for (i=0; i<r; i++)
            {
                for(j=0; j<r; j++)
                {
                    printf("%7i ", matrix2[i][j]);
                }
            }
        }
    }
    return 0;
}