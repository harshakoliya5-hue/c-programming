#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter time in hours : ");
    scanf("%d",&h);
    m=h*60;
    printf("%d h = %dm\n",h,m);
    return 0;
}