#include<stdio.h>
#include<string.h>
int lomba(char stn[])
{
    int i=0;
    while(stn[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char stn[100];
    int m;
    scanf("%d",&m);
    for(int n=1;n<=m;n++)
    {
        scanf("%s",&stn);
        int len = lomba(stn);
        if(len>10)
        {
            printf("%c%d%c\n",stn[0],len-2,stn[len-1]);

        }
        else
        {
            printf("%s\n",stn);
        }
    }


}
