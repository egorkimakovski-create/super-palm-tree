#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,x;
    printf("Introduce two integer variables:\n");
    scanf("%d %d", &a, &b);
    printf("Your introduced variables are: a=%d, b=%d\n", a, b);
    x=a;
    a=b;
    b=x;
    printf ("Variabilele schimbate sunt: a=%d, b=%d\n", a, b);
    return 0
;
}