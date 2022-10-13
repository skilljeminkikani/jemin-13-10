#include<stdio.h>
void main()
{
	int i=1,j=1;
	while(i<=10)
		{
			if(i%2==1)
			{
			for(j=1; j<=5; j++)
			{
				printf("%d \t",i);
			}
			}
		i++;
		printf("\n");
		}
}