#include<stdio.h>
int main()
{
    int i,no;
    while(scanf("%d",&no) != EOF)
    {
        if(no == 0)
            printf("vai ter copa!\n");
        else if(no >=1 && no <=100)
            printf("vai ter duas!\n");
    }
    return 0;
}
