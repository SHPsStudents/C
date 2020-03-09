#include<stdio.h>
int main()
{
    int mline=6;
    int mchar=mline*2-1;
    int mspaces=(mchar-1)/2;
    int middlespaces=1;
    for(int line=1;line<=mline;line++)
    {
        for(int i=1;i<=mspaces;i++)
            printf(" ");
        printf("x");
        if(line>1)
        {
            for(int a=1;a<=3;a++)
                printf("x");
        }
         {
            for(int j=1;j<=middlespaces;j++)
                printf(" ");
                printf("x");
            middlespaces+=2;

        }
        printf("\n");
        mspaces--;
    }
}
