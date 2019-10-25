#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    int i,l;
    gets(ch);
    l = strlen(ch);
    for(i=0;i<l;i++)
    {
        if(ch[i] >='a' && ch[i] <'n' || ch[i] >='A' && ch[i] <'N')
        {
            ch [i]= ch[i] + 13;
        }
        else if(ch[i] >='n' && ch[i] <='z' || ch[i] >='N' && ch[i] <='Z')
         {
              ch[i] = ch[i] -13;
         }
    }
    puts(ch);
    return 0;
}


