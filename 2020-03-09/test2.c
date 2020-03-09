//Test file
#include<stdio.h>
int main()
{
    int mark;
    scanf("%d", &mark);
    if (mark>=80)
    {
        printf("A");
    }
    if (mark>=70)
    {
        printf("B");
    }
    if (mark>=60)
    {
        printf("C");
    }
    if (mark>=50)
    {
        printf("D");
    }
    if (mark>=40)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }
}
