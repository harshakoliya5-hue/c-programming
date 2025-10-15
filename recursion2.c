#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int fact(int);
    printf("Enter the factor you want :");
    scanf("%d",&a);
    printf("%d! = %d",a,fact(a));
}
    int fact(int n)
{
    return((n)?(n*fact(n-1)):1);
}
