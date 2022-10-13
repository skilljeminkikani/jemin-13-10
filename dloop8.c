#include<stdio.h>
void main()
{
	char i=1,j=1,n=65;
	do
		{
			for(j=1; j<=5; j++)
			{
				printf("%c \t",n++);
			}
		i++;
		printf("\n");
		}
		while(i<=5);
}