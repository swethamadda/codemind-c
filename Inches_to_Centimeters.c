#include<stdio.h>
int main()
{
    double inches,centimetres;
    scanf("%lf",&inches);
    centimetres=inches*2.54;
    printf("%.2lf",centimetres);
}