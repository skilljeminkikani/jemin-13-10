#include<stdio.h>

int fun(int n)
{
    printf("\ninside function :- %d",n);
    if (n<5)
    {
        n++;
        fun(n);
    }
    else
    {
        return 0;
    }
    printf("\noutsidde fun :- %d",n);
}

int main()
{
    fun(1);
}