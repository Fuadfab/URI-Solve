#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    int i,N;
    strcpy(ch,"LIFE IS NOT A PROBLEM TO BE SOLVED");
    while(scanf("%d",&N) != EOF)
    {
     for(i=0;i<N;i++)
     {
         printf("%c",ch[i]);
     }
    printf("\n");
    }

    return 0;
}
