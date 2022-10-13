#include<stdio.h>
void main()
{
	char i=1,j=1,n=65;
	while(i<=5)
		{
			for(j=1; j<=5; j++)
			{
				printf("%c \t",n++);
			}
		i++;
		printf("\n");
		}
}