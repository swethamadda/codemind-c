#include<stdio.h>
int main()
{
   int x,y;
   float profit;
   scanf("%d%d",&x,&y);
   profit=y-x;
   profit=profit*100/x;
   printf("%.2f",profit);
}