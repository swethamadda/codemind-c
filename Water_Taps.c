#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    double rateA=1.0/x;
    double rateB=1.0/y;
    double combinedrate=rateA+rateB;
    double timetofilltank=1.0/combinedrate;
    printf("%.lf",timetofilltank);
    return 0;
}