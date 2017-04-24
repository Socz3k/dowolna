#include "array.h"
#include <stdio.h>
<<<<<<< HEAD
#define NAJNOWSZAZMIANA 1
=======
#define NOWAZMIANA 2
>>>>>>> remotes/origin/drugi

char **createMatrix(int n, int m)
{
    char **tab;
    tab=malloc(n*sizeof(*tab));
    if (!tab)
        return NULL;
    else{
    int i,j;
    for (i=0;i<n;i++)
    {
        tab[i]=(char*)malloc(m*sizeof(char));
        if(!tab[i])
        {
            deleteMatrix(&tab,i);
            return NULL;
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            tab[i][j]=0;
    return tab;
    }
}
void deleteMatrix(char*** ptab, int n)
{
    int i;
    for (i=0;i<n;i++)
        free(*ptab);
    *ptab=NULL;
}
char atMatrix(char** ptab, int n, int m)
{
    return ptab[n][m];
}

/*char** insertToMatrix (char** ptab, int n, int m, char wartosc)
{
    ptab[n][m]=wartosc;
    return ptab;
}*/

char** fillMatrix (char **ptab, int n, int m, char wartosc)
{
    int i, j;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            ptab[i][j]=wartosc;
    return ptab;
}

char** resizeMatrix (char **ptab, int n, int m)
{
    int i, j;
    int nKol= n+5;
    int mWier= m+5;
    char** newptab=createMatrix(nKol, mWier);
    for(i=0; i<nKol; i++)
        for(j=0; j<mWier; j++)
            newptab[i][j]=ptab[i][j];
    deleteMatrix(&ptab,n);
    return newptab;
}
