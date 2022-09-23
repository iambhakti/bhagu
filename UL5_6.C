#include<stdio.h>
#include<conio.h>
main()
{
   int x,y,z;
   clrscr();

   printf("enter the value of X:");
   scanf("%d",&x);
   printf("enter the value of y:");
   scanf("%d",&y);

   printf("value: %d\n",(x*x*x)+(3*x*y)+(3*y*z)+(3*z*x)+(y*y*y)+(z*z*z));
   getch();
}
