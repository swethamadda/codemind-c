#include<stdio.h>
int main()
{
    int u;
    float uc,bill,tb;
    scanf("%d",&u);
    if(u<200)
    {
        uc=1.20;
    }
    else if(u>=200 && u<=400)
    {
        uc=1.50;
    }
    else if(u>400 && u<=600)
    {
        uc=1.80;
    }
    else if(u>=600)
    {
        uc=2.00;
    }
    bill=u*uc;
    if(bill>400)
    {
        tb=bill+(bill*0.15);
        printf("%.2f",tb);
    }
    else
    {
        tb=bill+100;
        printf("%.2f",tb);
    }
    
}