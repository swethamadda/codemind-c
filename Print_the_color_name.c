#include<stdio.h>
int main()
{
    char cc;
    scanf("%c",&cc);
    if(cc ==  'v' || cc == 'V')
    {
        printf("Violet");
    }
    else if(cc ==  'i' || cc == 'I')
    {
        printf("Indigo");
    }
    else if(cc ==  'b' || cc == 'B')
    {
        printf("Blue");
    }
    else if(cc ==  'g' || cc == 'G')
    {
        printf("Green");
    }
    else if(cc ==  'y' || cc == 'Y')
    {
        printf("Yellow");
    }
    else if(cc ==  'o' || cc == 'O')
    {
        printf("Orange");
    }
    else
    {
        printf("-1");
    }
}