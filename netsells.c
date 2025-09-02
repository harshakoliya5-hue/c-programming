#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float a,b,c;
    printf ("enter your gross sales\n");
    scanf ("%f",&a);
    if (a>10000)
    {
        if (a>20000)
        {
            b=a*0.15;
            c=a-b;
            printf ("your net sales is %f",c);
        }
        else 
        {
            b=a*0.10;
            c=a-b;
            printf ("your net sales is %f",c);
        }
    }
    else
    {
        b=a*0.05;
        c=a-b;
        printf ("your net sales is %f",c);
    }
    return 0;
}    