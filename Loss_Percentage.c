#include<stdio.h>
int main()
{
    int x,y;
    float loss;
    scanf("%d%d",&x,&y);
    loss=x-y;
    loss=loss*100/x;
    printf("%.2f",loss);
}