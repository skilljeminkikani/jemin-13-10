#include<stdio.h>
void main()
{
	char i=65,j=65;
	do
		{
			for(j=65; j<=69; j++)
			{
				printf("%c \t",i);
			}
		i++;
		printf("\n");
		}
		while(i<=69);
}