#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,n;
    char ch[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(ch);
        l = strlen(ch);
    }
    if(l == 26)
        printf("frase completa\n");
    else if(l <26 && l>=13)
        printf("frase quase completa\n");
    else
        printf("frase mal elaborada\n");
    return 0;
}
