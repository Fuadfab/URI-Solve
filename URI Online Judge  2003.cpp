#include<stdio.h>
int main()
{
    int H,M,Late;
    char xh[0];
    while(scanf("%d",&H)!= EOF)
    {
        scanf("%c%d",xh,&M);
        if(H<7)
        {
            printf("Atraso maximo: 0\n");
        }
        else if(H<=7)
        {
            printf("Atraso maximo: %d\n",M);
        }
    }
    return 0;
}
