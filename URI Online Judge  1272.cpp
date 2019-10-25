#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000],ch1[1000];
    int i,l,j,N;
    scanf("%d",&N);
    while(N--)
    {
        gets(ch);
        l =strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i] == '.')
                continue;
                printf("%c",ch[i]);
        }

    }
    return 0;
}
