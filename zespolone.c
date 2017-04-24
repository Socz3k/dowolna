#include <stdio.h>
#include <math.h>

struct complex
{
    float re;
    float im;
};

void zespolona(struct complex z)
{
    printf("%.2f %+.2fi \n", z.re, z.im);
}

struct complex dodawanie(struct complex z1, struct complex z2)
{
    struct complex z3;
    z3.re=z1.re+z2.re;
    z3.im=z1.im+z2.im;
    return z3;
}

struct complex sprzezenie(struct complex z1)
{
    struct complex z2;
    z2.re=z1.re;
    z2.im=-z1.im;
    return z2;
}

float module(struct complex z1)
{
    float a;
    float b=z1.re;
    float c=z1.im;
    a=sqrt((b*b)+(c*c));
    return a;
}

int main()
{
    struct complex z1={2, 2}, z2= {3,3};
    zespolona (z1);
    zespolona (z2);
    zespolona (dodawanie(z1,z2));
    zespolona (sprzezenie(z1));
    zespolona (sprzezenie(z2));
    printf ("%f\n", module(z1));
    printf ("%f\n", module(z2));
    return 0;
}