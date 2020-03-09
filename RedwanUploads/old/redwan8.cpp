#include<stdio.h>
int main()
{
    int spaces=7*2;
    int lines=1;
    while(lines<=8)
    {
        int stars=1;
        while(stars<=lines);
        {
            printf("1");
        stars++;
        }
        int k=1;
        while(k<spaces)
        {
            printf(" ");
         k++;
        }
        stars=1;
        while(stars<lines)
        {
            printf("1");
         stars++;
        }
        printf("\n");
        lines++,
        spaces-=2;
    }
}

