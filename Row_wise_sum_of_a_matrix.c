#include<stdio.h>
int main()
{
	int N,M,i,j;
	scanf("%d%d",&N,&M);
	int a[N][M];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(i=0;i<N;i++)
	{
		sum=0;
		for(j=0;j<M;j++)
		{
			sum=sum+a[i][j];
		}
		printf("%d ",sum);
	}
}