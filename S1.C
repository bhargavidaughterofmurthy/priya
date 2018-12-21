#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 clrscr();
 printf("enter a number");
 scanf("%d",&num);
 //printf("%d",num%2);
 if(num%2==0)
{
 printf("it is an odd number");
}
 else
{
 printf("it is not an even number");
}
 getch();
}
