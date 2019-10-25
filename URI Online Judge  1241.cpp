#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000],str1[10000];
    int i,l1,k,l,n,j,count,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",str);
        scanf("%s",str1);
        l = strlen(str);
        l1 = strlen(str1);
        if(l1>l)
           printf("nao encaixa\n");
        else if(l>=l1)
         {
             k = l-l1;
             j=0;
             count =0;
             for(i=k;i<l;i++)
             {
                 if(str[i]==str1[j])
                    count++;
                    j++;
             }
             if(count == l1)
                printf("encaixa\n");
             else
                printf("nao encaixa\n");
         }
    }
    return 0;
}
