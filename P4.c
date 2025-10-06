#include <stdio.h>

int main()
{
    int s=0, t=1, n;
    printf("Introduceti n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        t=t*i; 
        s=s+t;
    }

    printf("Suma S = %d\n", s);

    return 0;
}