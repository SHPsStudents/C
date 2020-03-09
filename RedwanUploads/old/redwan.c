#include<stdio.h>
int main()
{
    int i;
    int evensum=0;
    int oddsum= 0;
    ar []={2,5,9,7,4,6};
    for(i=0,i<7,i++)
    {
        if(i%2==0)
        evensum=(evensum+ar[i]);
        if(i%2==1)
        oddsum=(oddsum+ar [i]);
    }
            printf("%d %d",evensum,oddsum);


}
