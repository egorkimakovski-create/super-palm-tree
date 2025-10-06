#include <stdio.h>
int main() 
{
int l=10000;
printf("Numerele care se pot scrie ca suma a doua cuburi in doua moduri diferite:\n");
for (int n = 1; n<l; n++) 
{
    int s=0;
        for (int x=1; x*x*x<n; x++) 
        {
            for (int y=1; y<=x; y++) 
            {
                if (x*x*x+y*y*y==n) 
                {
                 s++;
                }
            }
        }
        if (s>=2) 
        { 
            printf("%d\n", n);
        }
    }

    return 0;
}
