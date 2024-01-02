#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    int totalScore=(a*1)+(b*2);
    if(totalScore>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
    
}