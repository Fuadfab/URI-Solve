#include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(A+B>C && B+C>A && C+A>B)///ABC
    {
        printf("S\n");
    }
    else if(B+C>D && B+D>C && C+D>B)///BCD
    {
        printf("S\n");
    }
    else if(A+D>C && C+D>A && A+C>D)///ACD
    {
        printf("S\n");
    }
    else if(A+B>D && B+D>A && A+D>B)///ABD
    {
        printf("S\n");
    }
    else
        printf("N\n");
    return 0;

}
