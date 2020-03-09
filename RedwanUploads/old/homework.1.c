#include<stdio.h>
int main()
{
    int i;
    int evensum=0;
    int oddsum=0;
    ar[]={5,9,7,6,3,4};
    for(i=0;i<7;i++)
    {
        if(i%2==0)
        evensum=(evensum+i);
        if(i%2==1)
        oddsum=(oddsum+i);
    }
            printf("%d %d",evensum,oddsum);
}

