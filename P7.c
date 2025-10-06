#include <stdio.h>

int main() 
{
    int x, i, n; 
    printf("Introduceti un numar natural >= 2: ");
    scanf("%d", &x);
    n = 1; 
    for (i = 2; i < x; i++) 
    {
        if (x%i==0) 
        {
            n = 0;
            break;
        }
    }
    if (n==1) {
        printf("Numarul %d este prim.\n", x);
    } else {
        printf("Numarul %d nu este prim.\n", x);
    }

    return 0;
}
