#include<stdio.h>

int mul()
{
    int a,b;
    printf("Enter a :-");
    scanf("%d",&a);
    printf("Enter b :-");
    scanf("%d",&b);
    return a*b;
}
    void main()
    {
       int x = mul();
        printf("multipal both a and b :- %d",x);
    }