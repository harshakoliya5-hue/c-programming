#include<stdio.h>
#include<stdlib.h>
int main()
{
    int fact(int);
    printf("5!=%d",fact(5));
}
    int fact(int n)
{
    return((n)?(n*fact(n-1)):1);
}
