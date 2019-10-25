#include<stdio.h>
#include<string.h>
int main()
{
    int i,l1,j,l,c,n = 0;
    char ch[500],ch1[500];
    gets(ch);
    gets(ch1);
    l= strlen(ch1);
    l1 = strlen(ch);
    for(i=0;i<l1;i++)
    {
       for(j=0;j<l;j++)
        {
           c = strcmp(ch,ch1);
           if(c == 0)
           n++;
        }
    }
    printf("%d\n",n);
    return 0;
}
