#include <stdio.h>

int main()
{
    int n;
    double n2;
    printf("Introduceti un numar natural:\n");
    scanf("%d", &n);
    n2=1.0/n;
    printf("Inversul acestui numar natural este %lf", n2);
    return 0;

}