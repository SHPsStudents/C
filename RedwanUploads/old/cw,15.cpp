#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    int mul=fact(n-1)*n;
    return mul;
}
    int main()
    {
        printf("%d",fact(8));
    }
