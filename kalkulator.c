#include <stdio.h>
#define NAJNOWSZAZMIANA 1

int main ()
{
    char znak;
    float pierwsza=0,druga=0,wynik=0;
    printf ("Kalkulator wykonujacy proste dzialania\nWybierz dzialanie \n+ : dodawanie\n- : odejmowanie\n* : mnozenie\n/ : dzielenie\nWpisz znak dzialania!\n");
    scanf ("%c",&znak);
    switch (znak)
    {
        case'+':
        printf ("Wpisz pierwsza liczbe: ");
        scanf ("%f",&pierwsza);
        printf ("Wpisz druga liczbe: ");
        scanf ("%f",&druga);
        wynik=pierwsza+druga;
        printf("Wykonuje dodawanie... a+b= %f\n", wynik);
        break;
        case'-':
        printf ("Wpisz pierwsza liczbe: ");
        scanf ("%f",&pierwsza);
        printf ("Wpisz druga liczbe: ");
        scanf ("%f",&druga);
        wynik=pierwsza-druga;
        printf("Wykonuje odejmowanie... a-b= %f\n", wynik);
        break;
        case'*':
        printf ("Wpisz pierwsza liczbe: ");
        scanf ("%f",&pierwsza);
        printf ("Wpisz druga liczbe: ");
        scanf ("%f",&druga);
        wynik=pierwsza*druga;
        printf("Wykonuje mnozenie... a*b= %f\n", wynik);
        break;
        case'/':
        printf ("Wpisz pierwsza liczbe: ");
        scanf ("%f",&pierwsza);
        printf ("Wpisz druga liczbe: ");
        scanf ("%f",&druga);
        if(druga!=0)
        {
            wynik=pierwsza/druga;
            printf("Wykonuje dzielenie... a/b= %f\n", wynik);
        }
        else
            printf("Nie dziel przez 0!\n");
        break;
        default:
        printf("Niepoprawny znak, sprobuj jeszcze raz!\n");
        break;
    }

return 0;

}