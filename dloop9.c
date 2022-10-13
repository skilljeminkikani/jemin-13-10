#include<stdio.h>
void main()
{
	int i=11,j=11,n=11;
	do
		{
			for(j=11; j<=15; j++)
			{
				printf("%d \t",n++);
			}
		i++;
		printf("\n");
		n=n+5;
		}
		while(i<=15);
}