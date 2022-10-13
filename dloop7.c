#include<stdio.h>
void main()
{
	int i=1,j=1,n=1;
	do
		{
			for(j=1; j<=5; j++)
			{
				printf("%d \t",n++);
			}
		i++;
		printf("\n");
		}
		while(i<=5);
}