#include<stdio.h>
int main()
{
    char n[1000],n1[1000],s[1000];
    for(i=0;i<1000;i++)
    {
        scanf("%s %s",&n,&n1);
        if( n == 0 && n1 == 0);
        s[i] = (n[i] + n1[i]);
         v = s[i];
        if(v >= 10){
            c++;
        printf("%ld carry operations.\n",c);
        }
        else printf("No carry operations.\n");
    }
    return 0;

}
