#include<stdio.h>
int main()
{
    float m,h;
    printf("Enter time in minute : ");
    scanf("%f",&m);
    h=m/60;
    printf("%f m = %fh\n",m,h);
    return 0;
}