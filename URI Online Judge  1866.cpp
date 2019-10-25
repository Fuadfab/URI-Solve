#include<stdio.h>
int main()
{
    int i,T,N;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        if(N%2 == 0)
        printf("0\n");
        else printf("1\n");
    }
    return 0;
}
