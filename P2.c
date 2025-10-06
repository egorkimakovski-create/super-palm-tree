#include <stdio.h>
#include <math.h>

int main ()
{
    double a, b, c, x1, x2, d;

    printf("Introduce the 3 variables that reprezents the coeficients of the 2 grade equation:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("The equation isas follows: %.2lfx^2+%.2lfx+%.2lf=0\n", a, b, c);
    if (a==0)
    {
        if (b==0)
        {
            if (c==0)
            {
                printf("The equation has unlimited solutiions");
            }else
            {
                printf("The equation has no solution");
            }
        }else
        {
            x1=-c/b;
            printf("The equation has the solution x=%.2lf\n", x1);

        }

    }else 
    {
        d=b*b-4*a*c;
        if (d<0)
        {
            printf("The equation has no solution\n");
        
        }else if (d==0)
        {
            x1 = -b/(2*a);
            printf("The solution of equation will be x1=x2=%.2lf\n", x1);
        
        }else 
        {
            x1 = (-b - sqrt(d)) / (2*a);
            x2 = (-b + sqrt(d)) / (2*a);
        printf("The solutions of the equations are x1=%.2lf and x2=%.2lf\n", x1, x2);
        }
    }
    return 0;
}