#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,n=0;
    double ava;
    char ch[1000];
    gets(ch);
    l = strlen(ch);
    for(i=0;i<l;i++)
    {
        if (ch[i] == ' ')
            n++;
    }
    printf("%d\n %d\n",l,n);
    ava = l/n;
    printf("%lf\n",ava);
    return 0;

}
