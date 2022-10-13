#include<stdio.h>
void main()
{
	int maths[5],sci[5],eng[5];
	int i,sum;
	float per;
	for(i=0; i<=4; i++)
	{
		printf("maths[%d]:- ",i);
		scanf("%d",&maths[i]);
	}
printf("\n");
	for(i=0; i<=4; i++)
	{
		printf("sci[%d]:- ",i);
		scanf("%d",&sci[i]);
	}
printf("\n");
	for(i=0; i<=4; i++)
	{
		printf("eng[%d]:- ",i);
		scanf("%d",&eng[i]);
	}

	printf("maths  \t  sci  \t  eng \t total \t per \t grade ");
	
	for(i=0; i<=4; i++)
	{
		printf("\n %d",maths[i]);
		printf("\t %d",sci[i]);
		printf("\t %d",eng[i]);
	}

	sum=maths[i]+eng[i]+sci[i];
	printf("\t %d",sum);

	per=(maths[i]+eng[i]+sci[i]);
	printf("\t %0.2f",per);

	if(maths[i]<35 || eng[i]<35 || sci[i]<35 || per<35)
	{
		printf("\t fail");
	}
	else if(per>90)
	{
		printf("\t A");
	}
	else if(per>85)
	{
		printf("\t B");
	}
	else if(per>65)
	{
		printf("\t C");
	}
	else if(per>35)
	{
		printf("\t D");	
	}	
}