#include <stdio.h>
#include <stdlib.h>


float potegowanie(float p, float w)
{
    if (w == 0) return 1;

    else if (w < 0) return (1/p)*(potegowanie(p, w-1));

    else return p*potegowanie(p, w-1);
}


int main()
{
    int p;
    int w;
    printf("Podaj podstawe: ");
    scanf("%d", &p);
    printf("Podaj wykladnik: ");
    scanf("%d", &w);
    printf("Wynik: %.3lf", potegowanie(p, w));
    return 0;
}
