// recursive function 
//  program of factorial number
#include<stdio.h>

int multiplication(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a * multiplication(a-1);
    }
    
}

int main()
{
    int n,f;
    printf("Enter Number :");
    scanf("%d",&n);
    f = multiplication(n);
    printf("Given number factorial is %d",f);
}
