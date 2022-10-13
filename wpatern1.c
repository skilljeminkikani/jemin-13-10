#include<stdio.h>
void main()
{
	int i=1,j=1;
	while(i<=5)
		{
			for(j=1; j<=i; j++)
			{
				printf("%d \t",j);
			}
		i++;
		printf("\n");
		}
}