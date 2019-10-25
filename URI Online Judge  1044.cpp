#include<stdio.h>
void add()
{
    int M,N,temp;
    char ch[0];
    scanf("%d%c%d",&M,ch,&N);
    if(M>N)
    {
        temp = M;
        M=N;
        N =temp;
    }
    if(N%2==0)
    {
        printf("Sao Multiplos\n");
    }
    else
      printf("Nao sao Multiplos\n");

}
int main()
{
    add();
    return 0;
}
