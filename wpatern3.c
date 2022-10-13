#include<stdio.h>
void main()
{
	int i=5,j=5;
	while(i>=1)
		{
			for(j=5; j>=i; j--)
			{
				printf("%d \t",i);
			}
		i--;
		printf("\n");
		}
}