//Test file
#include<stdio.h>
int main()
{
    int mark;
    int noOfSubject=5;
    while (noOfSubject>0)
    {
        scanf("%d", &mark);
        if (mark>=80)
        {
            printf("A");
        }
        else if (mark>=70)
        {
            printf("B");
        }
        else if (mark>=60)
        {
            printf("C");
        }
        else if (mark>=50)
        {
            printf("D");
        }
        else if (mark>=40)
        {
            printf("E");
        }
        else
        {
            printf("F");
        }
        printf("\n");
        noOfSubject--;
    }

}
