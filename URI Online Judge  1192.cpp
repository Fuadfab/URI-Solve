#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int T,n,n1;
    char ch;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d  %c %d",&n,&ch,&n1);
        if(n == n1)
            {
                printf("%d\n",n*n1);
            }
        if(isupper(ch) == 1)
        {
            printf("%d\n",n1-n);
        }
        else
        {
            printf("%d\n",n+n1);
        }
    }
    return 0;
}
