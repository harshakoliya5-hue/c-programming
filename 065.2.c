#include<stdio.h>
//#include<conio.h>

void main( )
{
    char nm[50];
 //   clrscr();
 //   scanf("%s",nm);
    gets(nm);
    printf("%s\n",nm);
    int i=0;
    while(nm[i] !='\0')
    printf("%c\n",nm[i++]);

 //   getch();
}
