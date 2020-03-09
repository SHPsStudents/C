#include<stdio.h>
int main()
{
    int n;
    int ans=0;
    scanf("%d",&n);
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>=2)
        ans++;
    }
    printf("%d",ans);


}
