#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int totalExpenditure=y*30;
    if(x>=totalExpenditure)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}