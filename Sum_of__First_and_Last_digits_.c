#include<stdio.h>
int main()
{
    int n,x,y,sum=0;
    scanf("%d",&n);
    y=n%10;
    while(n>=10)
    {
        n/=10;
    }
    x=n;
    sum=x+y;
    printf("%d",sum);
}