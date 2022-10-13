#include<stdio.h>
void main()
{
	int a[5],b[5];
	int i;
	for(i=0; i<=4; i++)
	{
		printf("a[%d]:- ",i);
		scanf("%d",&a[i]);
	}

	for(i=0; i<=4; i++)
	{
		printf(" b[%d]:- ",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<=4; i++)
	{
		printf("\n %d  \t %d ",a[i],b[i]);
	}
	
}