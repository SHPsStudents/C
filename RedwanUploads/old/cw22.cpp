#include<stdio.h>
int main()
{
    char ans[201];
    char stn[101];
    scanf("%s",&stn);
    int j=0;
    for(int i=0;stn[i]!='\0';i++)
    {
        char ch=stn[i];
        if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'||ch=='Y'||ch=='y')
        {
            continue;
        }
        else
        {
            if(ch>=65&&ch<=90)
                ch=ch+32;

            ans[j]='.';
            j++;
            ans[j]=ch;
            j++;
        }
    }
    ans[j]='\0';
    puts(ans);
}
