#include "array.h"
#include "algorytm.h"
#include <stdio.h>
#define ALIVE 1
#define DEAD 0

int sprawdzaniezycia(char** ptab,int n, int m)
{
    if (n==0 || n==22 || m==0 || m==80)
        return 0;
    else{
        if (ptab[n][m]=='*')
            return 1;
        else
            return 0;
    }
}

int sprawdzaniesasiadow(char** ptab, int n, int m)
{
    int sasiedzi=0;
    int i,j;
        if (n==0 || n==22 || m==0 || m==80){
            return sasiedzi;
    }
    else{
    for (i=n-1; i<=n+1; i++)
        for (j=m-1; j<=m+1; j++)
            if (sprawdzaniezycia(ptab, i, j)==ALIVE)
                sasiedzi++;
    if (sprawdzaniezycia(ptab, n, m)==ALIVE)
        sasiedzi--;
    return sasiedzi;
    }
}

char** zycie(char** ptab, int n, int m)
{
    int i, j;
    char** newptab=createMatrix(n,m);
    fillMatrix(newptab, n, m, ' ');
    for(i=1; i<n; i++){
        for(j=1;j<m;j++){
            if(sprawdzaniezycia(ptab, i, j)==DEAD){
                if (sprawdzaniesasiadow(ptab, i, j)==3)
                    newptab[i][j]='*';
            }
            else{
                if(sprawdzaniesasiadow(ptab, i, j)==2 || sprawdzaniesasiadow(ptab,i ,j)==3){
                    newptab[i][j]='*';
                }
                else
                    newptab[i][j]=' ';
            }
        }
    }
    deleteMatrix(&ptab, n);
    return newptab;
}
