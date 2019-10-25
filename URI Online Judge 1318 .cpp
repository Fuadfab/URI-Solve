#include<stdio.h>
int main()
{
    int ara[1000], ara2[1000],i, j, T,M, cont=0;
    while(scanf("%d %d",&T, &M)!=EOF)
    {
        if(T==0 && M==0) break;

        for(i=0; i<M; i++)
        {
            scanf("%d", &ara[i]);
        }

        for(i=0; i<M; i++)
        {
            for(j=i+1;j<M;j++)
            {
                if(ara[i]==ara[j])
                {
                    cont++;
                }
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}
