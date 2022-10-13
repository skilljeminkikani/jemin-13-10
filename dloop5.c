#include<stdio.h>
void main()
{
	int i=1,j=1;
	do
		{
			if(i%2==0)
			{
			for(j=1; j<=5; j++)
			{
				printf("%d \t",i);
			}
			}
		i++;
		printf("\n");
		}
		while(i<=10);
}