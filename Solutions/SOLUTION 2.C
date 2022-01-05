/* write a program to enter any number and print in reverse number
date:27/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
       int a,r,sum=0;
       clrscr();
       printf("enter the value");
       scanf("%d",&a);
       while(a>0)
       {
	    r=a%10;
	    printf("%d",r);
	    a=a/10;
       }
       getch();
}
