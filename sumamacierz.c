#include <stdio.h>
#define KOLUMNY 3
#define WIERSZE 2
#define NAJNOWSZAZMIANA 1

int main()
{
    int m1[WIERSZE][KOLUMNY]={{1, 3, 4}, {2, 4, 5}};
    int m2[WIERSZE][KOLUMNY]={{2, 5, 1}, {7, 4, 2}};
    int m3[WIERSZE][KOLUMNY];
    int *p1;
    int *p2;
    int i,j;
    /*for (i=0; i<WIERSZE; i++){
        for (j=0; j<KOLUMNY; j++){
            m1[i][j]=rand() % 4+1;                      //losowanie liczb dla macierzy
            m2[i][j]=rand() % 4+1;
        }
    }   */
    for (i=0; i<WIERSZE; i++){
        for (j=0; j<KOLUMNY; j++){
            printf ("%d ", m1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0; i<WIERSZE; i++){
        for (j=0; j<KOLUMNY; j++){
            printf ("%d ", m2[i][j]);
        }
        printf("\n");
    }
    printf ("\n");
    for (i=0; i<WIERSZE; i++){
        for (j=0; j<KOLUMNY; j++){
            m3[i][j]=0;                                 //zerowanie 3 macierzy
        }
    }
    for (i=0; i<WIERSZE; i++){
        for (j=0; j<KOLUMNY; j++){
            p1=&m1[i][j];
            p2=&m2[i][j];
            m3[i][j]=*p1+*p2;
            printf ("%d ", m3[i][j]);
        }
        printf ("\n");
    }
    printf ("\n");

    return 0;
}