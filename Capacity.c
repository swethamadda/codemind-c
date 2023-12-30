#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&b,&s);
    int capacity=t*s*b*512;
    int capacityKB=capacity/512;
    printf("%d KB
",capacityKB);
}