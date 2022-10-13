#include<stdio.h>
void main()
{
	int i=5,j=5;
	do
		{
			for(j=5; j>=1; j--)
			{
				printf("%d \t",i);
			}
		i--;
		printf("\n");
		}
		while(i>=1);
}