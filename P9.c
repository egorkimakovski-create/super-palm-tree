#include <stdio.h>
int main() 
{
    int n;
    printf("Introduceti un numar natural:\n");
    scanf("%d", &n);
    printf("Factorii primi ai numarului n=%d sunt:", n);
    for (int i=2; i <= n; i++) 
    {
        while (n%i == 0) {
            printf("%d ", i);
            n=n/i;
        }
    }

    printf("\n");
    return 0;
}
