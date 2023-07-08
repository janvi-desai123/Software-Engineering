//2-D Array : Addition of two Matrix

#include<stdio.h>

int main()
{
	int a1[2][2],a2[2][2],res[2][2];
	int i,j;
	
	//user i/p
	printf("\n-------------First Matrix--------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a1[i][j]);
		}
	}
	//ip 2
	printf("\n-------------Second Matrix--------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element : ");
			scanf("%d",&a2[i][j]);
		}
	}
	
	//make addition 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			res[i][j]=a1[i][j]+a2[i][j];
		}
	}
	
	//Result Matrix :
	printf("\n-------------Result Matrix--------------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",res[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
