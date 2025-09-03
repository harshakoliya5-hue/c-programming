#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,f;
    system("cls");
    printf("Enter the value to calculate factor.");
    scanf("%d",&n);
    f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    printf("%d!=%d\n",n,f);
}
