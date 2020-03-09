#include<stdio.h>
int main()
{
    /*int spaces=7*2;
    for(int lines=1;lines<=8;lines++,spaces-=2)
    {
        for(int stars=1;stars<=lines;stars++)
            printf("1");
        for(int k=1;k<spaces;k++)
            printf(" ");
        for(int stars=1;stars<lines;stars++)
            printf("1");

        printf("\n");

    }*/


}

    spaces=7*2;
    int lines=1;
    while(lines<=8)
    {
        int k=1;
        while(k<=spaces)
        {
            printf(" ");
         k++;
        }
        int stars=1;
        while(stars<=lines)
        {
            printf("1");
            stars--;
        }
    }


