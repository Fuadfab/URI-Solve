#include<stdio.h>
void even()
{
    int i,c=0;
    int array[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2 == 0)
          {
              c++;
          }
    }printf("%d valores pares\n",c);
}
int main()
{
    even();
    return 0;
}
