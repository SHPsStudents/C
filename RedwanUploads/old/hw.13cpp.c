#include<stdio.h>
int main()
{
    int fib_2=0;
    int fib_1=1;
    int fib_0;
    for(int i=0;i<=8;i++)
    {
       fib_0=fib_1+fib_2;
       fib_2=fib_1;
       fib_1=fib_0;
       printf("%d\n",fib_0);
    }
}


