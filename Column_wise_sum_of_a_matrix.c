#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(i=0;i<c;i++)
	{
		sum=0;
		for(j=0;j<r;j++)
		{
			sum=sum+a[j][i];
		}
		printf("%d ",sum);
	}
}