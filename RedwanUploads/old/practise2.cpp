#include<stdio.h>
int main()
{
    int n=40;
    for(int spaces=n-1,star=1;spaces>=0;star+=2,spaces--)
    {
        for(int j=0;j<spaces;j++)
            printf(" ");
        for(int k=0;k<star;k++)
            printf("*");
        printf("\n");
     }
}
