#include <stdio.h>
#define NAJNOWSZAZMIANA 1


int* add(int* Tab, int n, int new_elem)

{
    int* p = malloc (sizeof (int)*(n+1));
    int z;
    if (p)
    {
        for (z=0; z<n; z++)
        {
            p[z] = Tab[z];
        }
        p[n]=new_elem;
        return p;
    }
    else
        return NULL;
}

int main ()
{
    int i, z;
    int x=10;
    int new_elem=0;
    int* tab=NULL;
    for (z=0; z<x; z++)
    {
        scanf ("%i", &new_elem);
        tab = add(tab,z,new_elem);
    }
    if(tab!=NULL)
        for (i=0; i<x; i++)
            printf ("%i ", tab[i]);
    free(tab);
    return 0;
}