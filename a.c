#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	for(i=0; i<=4; i++)
	{
		printf("a[%d]:-",i);
		scanf("%d",&arr[i]);
	}

	for(i=0; i<=4; i++)
	{
		printf("\n arr[%d]:- %d",i,i,arr[i]);
}