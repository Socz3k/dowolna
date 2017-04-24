#include "array.h"
#include "algorytm.h"
#include <stdio.h>
#include <unistd.h>
#define NOWAZMIANA 2

#define ROW 22
#define COL 80

int main(int argc, char *argv[])
{
    FILE *PlikWe;
    FILE *PlikWy;

    PlikWe=fopen("danewe.txt", "r");
    PlikWy=fopen("danewy.txt", "w");


    int i,j;
    char **Tab = createMatrix(ROW,COL);
    fillMatrix(Tab, ROW, COL, ' ');

    int temp1, temp2;

    while (!feof (PlikWe)){
        fscanf(PlikWe,"%i",&temp1);
        fscanf(PlikWe,"%i",&temp2);
        Tab[temp2][temp1] = '*';
    }

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++)
        printf("%c", Tab[i][j]);
        printf("\n");
    }
    while(1){
            usleep(300000);
            system("cls");
            Tab = zycie(Tab, ROW, COL);
            for(i = 0; i < ROW; i++){
                for(j = 0; j < COL; j++){
                    printf("%c", atMatrix(Tab, i, j));
        }
        printf("\n");
    }
        }
        //system("pause");
        for(i = 0; i < ROW; i++){
            for(j = 0; j < COL; j++){
                fprintf(PlikWy, "%c", Tab[i][j]);
            }
            fprintf(PlikWy, "\n");
        }
        fclose(PlikWe);
        fclose(PlikWy);
        return 0;
}
