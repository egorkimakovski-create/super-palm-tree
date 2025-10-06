#include <stdio.h>
int main() 
{
    int n;
    printf("Introduceti numarul de elemente: \n");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Secventa trebuie sa contina cel putin un numar.\n");
    }
    double num, min, max;
    printf("Introduceti numarul 1: \n");
    scanf("%lf", &num);
    min = max = num; 

    for (int i=2; i<=n; i++) {
        printf("Introduceti numarul %d: ", i);
        scanf("%lf", &num);

        if (num<min) min=num;
        if (num>max) max=num;
    }
    printf("Valoarea minima: %.2lf\n", min);
    printf("Valoarea maxima: %.2lf\n", max);

    return 0;
}
