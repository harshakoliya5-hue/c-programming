#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
char nm[]="PDEU";
int i=0;
while(nm[i]!='\0')
{
    if
    (nm[i]>='A'&&nm[i]<='Z')
    nm[i]+=32;
    i++;
}
    printf("%s\n",nm);
}
