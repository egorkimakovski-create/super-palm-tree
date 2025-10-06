#include <stdio.h>
#include <math.h>
int main ()
{
    double a,b,c, x1, x2, x3;
    printf("Introduceti trei variabile oareacre;\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a>b)
    {
        if (a>c)
        {
            if(b>c)
            {
                x1=a;
                x2=b;
                x3=c;
            }else
            {
                x1=a;
                x2=c;
                x3=b;
            }
        }else
        {
            x1=c;
            x2=a;
            x3=b;
        }
    }else
    {
        if (b<c)
        {
            x1=c;
            x2=b;
            x3=a;
        }else
        {
            if(a>c)
            {
                x1=b;
                x2=a;
                x3=c;
            }else 
            {
                x1=b;
                x2=c;
                x3=a;
            }
        }
    }
    printf("Urmatoareke 3 variabile merg in ordine cresctoare: %lf<%lf<%lf\n", x3, x2, x1);
return 0;
}