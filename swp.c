// swap the values of two integers
#include <stdio.h>
int main ()
 {
    int a,b,c;
    printf("Enter value for a\n");
    scanf("%d",&a);
    printf("Enter value for b\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("new value of a=%d\n",a);
    printf("new value of b=%d\n",b);
    return 0;
 }