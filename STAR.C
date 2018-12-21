#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m,n;
	clrscr();
	printf("enter no. of rows and coloumns :\n");'
	scanf("%d%d",&m,&n);
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}