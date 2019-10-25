#include<stdio.h>
int main()
{
    char ch[15],ch1[15];
    int i,T;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%s %s",ch,ch1);
        if(ch[1] == 't' && ch1[1] == 'e')
        {
            printf("Jogador 1 venceu\n");
        }
        else  if(ch[1] == 'e' && ch1[1] == 't')
        {
            printf("Jogador 2 venceu\n");
        }
        else if(ch[1] == 'e' && ch1[1] == 'a')
        {
            printf("Jogador 1 venceu\n");
        }
        else if( ch[1] == 'a' && ch1[1] == 'e')
        {
            printf("Jogador 2 venceu\n");
        }
        else if(ch[1] == 't' && ch1[1] == 'a')
        {
            printf("Jogador 1 venceu\n");
        }
        else if(ch[1] == 'a' && ch1[1] == 't')
        {
            printf("Jogador 2 venceu\n");
        }
         else if(ch[1] == 'a' && ch1[1] == 'a')
        {
            printf("Ambos venceram\n");
        }
         else if(ch[1] == 'e' && ch1[1] == 'e')
        {
            printf("Sem ganhador\n");
        }
         else if(ch[1] == 't' && ch1[1] == 't')
        {
            printf("Aniquilacao mutua\n");
        }
    }
    return 0;
}
