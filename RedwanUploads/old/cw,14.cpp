#include<stdio.h>
int grass(int a,int b)
{
    return a+b;
}
int main()
{
    int a;
    int b;
    scanf("%d %d",&a, &b);
    printf("%d\n",grass(a,b));
}
