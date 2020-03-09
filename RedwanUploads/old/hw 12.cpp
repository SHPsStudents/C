#include<stdio.h>
int grass(int fib_2,int fib_1,int fib_0)
{
      fib_0=fib_1+fib_2;
       fib_2=fib_1;
       fib_1=fib_0;
       return printf("%d\n",fib_0);
}
int main()
{
    int fib_2=0;
    int fib_1=1;
    int fib_0;
    for(int i=0;i<=8;i++)

    {
        grass(fib_2,fib_1,fib_0);
    }
}

