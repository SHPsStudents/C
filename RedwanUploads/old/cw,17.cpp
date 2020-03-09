#include<stdio.h>
int main()
{
    int m,n,a;
    scanf("%d %d %d",&n,&m,&a);
    long long x = m/a;
    if(m%a!=0)
        x++;
     long long w=n/a;
    if(n%a!=0)
        w++;
    printf("%lld\n",w*x);

}
