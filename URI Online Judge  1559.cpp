#include<stdio.h>
int main()
{
    int i,no,no1,no2,sum = 0;
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        scanf("%d %d",&no1,&no2);
        sum = no1 + no2;
        printf("%d\n",sum);
    }
    return 0;
}
