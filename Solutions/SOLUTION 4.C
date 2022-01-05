/* write a program to check number armstrong number or not
date:27/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
      int a,b,sum=0,c;
      clrscr();
      printf("enter any number");
      scanf("%d",&a);
      c=a;
      while(a>0)
      {
	 b=a%10;
	 sum=b*b*b+sum;
	 a=a/10;
      }
      if(sum==c)
      {
	  printf("\n %d number is armstrong",sum);
	  }
	  else
	  {
	  printf("\n %d number is not armstrong",sum);
	  }
	  getch();
}