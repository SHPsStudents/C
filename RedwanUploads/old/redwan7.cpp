#include<stdio.h>
int main()
{
    int spaces=7*2;
    for(int lines=1;lines<=8;lines++;spaces-=2)
    {
        for(int stars=1;stars<=lines;stars++)
            printf("1");
        for(int k=1;k<spaces;k++)
            printf(" ");
        for(int stars=1;stars<lines;stars++)
            printf("1");
        printf("\n");
    }
}
