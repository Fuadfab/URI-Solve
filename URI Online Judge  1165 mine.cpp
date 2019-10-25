#include<stdio.h>
int main()
{
    int i,no,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&no);
      for(i=2;i<=no/2;i++)
      {
        if(no%i == 0)
            printf("%d nao eh primo\n",no);
        else
            printf("%d eh primo\n",no);
      }
    }
    return 0;
}
