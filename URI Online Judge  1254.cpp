#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l;
    char ch[500],ch1[500];
    while(scanf("%s",ch) != EOF)
    {
        scanf("%d",&n);
        gets(ch1);
        l = strlen(ch);
        for(i=0;i<l;i++)
        {
        if(ch1[i] == ch[i])
            ch1[i] = 'n';
        }
        puts(ch1);
    }

    return 0;

}
