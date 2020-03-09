#include<stdio.h>
int main()
{
    int ans=0;
    int n,k;
    scanf("%d %d",&n,&k);
    int ar[50];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    ar[k-1];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=ar[k-1]&& ar[i]!=0)
            ans++;

    }
    printf("%d",ans);

}
