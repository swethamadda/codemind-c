#include<stdio.h>
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float totalmarks,percentage;
    totalmarks=a+b+c+d+e;
    percentage=(totalmarks/500)*100;
    char grade;
    if(percentage >= 90)
    {
        printf("Grade A");
    }
    else if(percentage >= 80)
    {
        printf("Grade B");
    }
    else if(percentage >= 70)
    {
        printf("Grade C");
    }
    else if(percentage >= 60)
    {
        printf("Grade D");
    }
    else if(percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}