#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int natural(int);
    printf("Enter a number:");
    scanf("%d",&a);
    natural(a);
}
    int natural(int n)
{
    if(n)
    {
        natural(n-1);
        printf("%d\n",n*2);
    }
}
