/* write a program to enter any number and check it's prime number or not
date:22/12/21*/
#include<stdio.h>
#include<conio.h>
 void main()
{
      int x,y;
      clrscr();
      printf("\n enter eny number:");
      scanf("%d",&x);
      for(y=2;y<=(x-1);y++)
      if(x%y==0)
      break;
      if(y==x)
		 printf("%d is a prime number",x);
      else
		 printf("%d is a not a prime number",x);
      getch();
}