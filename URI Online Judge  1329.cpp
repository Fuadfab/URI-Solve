#include<stdio.h>
int main()
{
    int i,N,R,m = 0,j = 0;
    scanf("%d",&N);
    while(N != 0)
    {
       for(i=0;i<N;i++)
       {
        scanf("%d",&R);
        if(R == 0)
        m++;
        else if (R == 1)
          j++;

       }
    printf("Mary won %d times and John won %d times",m,j);
    }

    return 0;
}
