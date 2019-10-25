#include<stdio.h>
int main()
{
    double M[12][12],SUM = 0.0;
    int i,j,N = 1;
    char ch[2];
    scanf("%s",&ch);
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
        scanf("%lf",&M[i][j]);
        }
    }
    for(i = 1;i < 12;i++){
        for(j = 0;j < N;j++){
        SUM += M[i][j];
        }
        N++;
    }
    if(ch[0] == 'S')printf("%.1lf\n",SUM);
    else if(ch[0] == 'M')printf("%.1lf\n",SUM/66.0);
    return 0;
}
