#include<stdio.h>
int main()
{
    int i;
    int fib_2=21;
    int fib_1=13;
    int fib_0;
    while(true)
    {
        fib_0=fib_2-fib_1;
        fib_2=fib_1;
        fib_1=fib_0;
        printf("%d\n",fib_0);
        if(fib_0==0)
            break;
    }
}
