#include <stdio.h>

int main() {
    int n, s=0;
    printf("Introduceti un numar natural:\n");
    scanf("%d", &n);

    while (n>=0) 
    {
        s=s+n%10;
        n=n/10;  
        if(n==0) break;   
    }
    printf("Suma cifrelor este: %d\n", s);
    return 0;
}

