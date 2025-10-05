#include <stdio.h>
int main() 
{
    int x, i, s=0, z; 
    printf("Introduceti un numar natural:\n");
    scanf("%d", &x);
    if (x < 2) {
        printf("Nu sunt numere prime.\n");
    } else 
    {
        for (z=2; z < x; z++) 
        {
            int n = 1; 
            for (i=2; i < z; i++) 
            {
                if (z%i == 0) 
                {
                    n = 0;
                    break;
                }
            }
            if (n == 1)
            {
                s = s + 1;
            }
        }
    }
    printf("Numarul de numere prime mai mici decat %d este: %d\n", x, s);
    return 0;
}
