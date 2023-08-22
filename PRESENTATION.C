#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>100)
    {
        printf("the grade will be invalid");
    }
    else if(a<0)
    {
        printf("the grade will be invalid");

    }
    else if(a>=0 && a<33)
    {
        printf("the grade will be f");

    }
    else if(a>=33 && a<=40)
    {
        printf("the grade will be d");
    }
    else if(a>=40 && a<=49)
    {
        printf("the grade will be c");
    }
    else if(a>=50 && a<=59)
    {
        printf("the grade will be b");
    }
    else if(a>=60 && a<=69)
    {
        printf("the grade will be a-");
    }
    else if(a>=70 && a<=79)
    {
        printf("the grade will be a");
    }
    else if(a>=80 && a<=100)
    {
        printf("the grade will be a+");
    }

}
