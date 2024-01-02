#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int tc=4*x;
    if(tc<=1000)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}