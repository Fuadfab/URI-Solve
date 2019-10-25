#include<stdio.h>
#include<math.h>
int main()
{
    long int N,Result;

    while(N!=0)
    {
         scanf("%d",&N);
        if(N == 1)printf("1\n");
        else if(N == 2)printf("2\n");
        else if(N == 3)printf("3\n");
        else
        {
            Result = (N*N)-11;
            printf("%ld\n",Result);
        }
    }
    return 0;
}
