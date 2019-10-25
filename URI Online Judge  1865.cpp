#include<stdio.h>
#include<string.h>
int main()
{
    int i,C,n;
    char ch[100];
    scanf("%d",&C);
    for(i=0;i<C;i++)
    {
        scanf("%s %d",ch,&n);
        if (!strcmp(ch,"Thor"))
        printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
