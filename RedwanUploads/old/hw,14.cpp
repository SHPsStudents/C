#include<stdio.h>
int main()
{
    int evensum=0;
    int oddsum=0;
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
            evensum=evensum+i;
        if(i%2==1)
            oddsum=oddsum+i;
    }
     printf("%d %d\n",evensum,oddsum);
}
