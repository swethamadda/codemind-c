#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d%d%d",&x,&y);
    int maxDistance=x*5;
    if(maxDistance>=y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}