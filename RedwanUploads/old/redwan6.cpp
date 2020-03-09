#include<stdio.h>
int main()
{
   int n=20;
   int star;
    for(int spaces=n-1;star=1,spaces>=0;spaces--,star+=2)
   {
       for(int j=0;j<spaces;j++)
            printf(" ");
        for(int k=0;k<star;k++)
            printf("*");
        printf("\n");


   }
}
