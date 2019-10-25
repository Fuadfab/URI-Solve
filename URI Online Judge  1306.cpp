#include<stdio.h>
int main()
{
    int i=1,n,n1,v,temp;
    while(1)
    {
        scanf("%d %d",&n,&n1);
        if(n == 0 && n1 ==0)break;
        if(n1>n)
        {
            temp = n1;
            n1=n;
            n =temp;
        }
        v = n/n1;
        if(v >= 1 && v <=26)
            printf("case %d:%d\n",i,v);
        else
            printf("impossible\n");
        i++;
    }
}
