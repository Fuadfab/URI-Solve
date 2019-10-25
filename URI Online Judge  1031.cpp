#include<stdio.h>
int main()
{
    int ara[20] ={6,11,16,5,12,2,9,17,10,4,15,14,3,8,7};
    int N,i,c = 0;
    scanf("&d",&N);
    for(i=0;i<20;i++)
    {
        if(ara[i] == N)
           break;
    }
    printf("%d\n",ara[i]);
    return 0;
}
