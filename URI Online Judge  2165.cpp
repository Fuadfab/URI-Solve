#include<stdio.h>
#include<string.h>
int main()
{
    char ch[600];
    int l;
    gets(ch);
    l = strlen(ch);
    if(l<140)
        printf("TWEET\n");
    else printf("MUTE\n");
    return 0;
}
