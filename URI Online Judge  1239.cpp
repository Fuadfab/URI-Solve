#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char ch[500];
    gets(ch);

        l = strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i] == '_')
            {
                ch[i] = 'i';
               /// ch[i] = '<i\n>';
            }
             else if(ch[i] == '*')
             {
                 ch[i] = 'b';
                 ///ch[i] = '<b\>';
             }
        }
        puts(ch);
    return 0;

}
