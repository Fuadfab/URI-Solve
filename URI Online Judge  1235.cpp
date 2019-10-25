#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,T,n;
    char ch[50];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s %d",&ch,&n);
        for(j=0;j<50;j++)
        {
            if(ch[j] =='\0')break;
            if((ch[j] - n) < 65)
                printf("%c",(ch[j] - n)+26);
            else
                printf("%c",(ch[j] - n));
        }
        printf("\n");
    }
    return 0;
}
