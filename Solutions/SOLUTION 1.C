/* write a program to enter any num and print sum of digits.
date:22/12/21*/
#include<stdio.h>
#include<conio.h>
 void main()
{
       int x,y,sum=0;
       clrscr();
       printf("\n enter any number:");
       scanf("%d",&x);
       for(y=1;y<=x;y++)
       {
	 sum+=y;
       }
       printf("sum:%d",sum);
       getch();
}