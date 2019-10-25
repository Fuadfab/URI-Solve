#include<stdio.h>
int main()
{
    int j,No,Test;
    scanf("%d",&Test);
    for(j=1;j<=Test;j++){
        scanf("%d",&No);
        if(No == 2 || No == 5 || No == 3)
            printf("%d eh primo\n",No);
       else if(No%2 == 0 || No%3 == 0 || No%4 == 0 || No%5 == 0)
        printf("%d nao eh primo\n",No);
        else
        printf("%d eh primo\n",No);
    }
     return 0;
}

