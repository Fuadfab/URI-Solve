
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000];
    int i,l;
    while(gets(str)!= NULL)
     {
            l = strlen(str);
           for(i=0;i<l;i++)
           {
              if(str[i]>='A' && str[i]<='Z' )
            {
                if(str[i]<'N')
                    str[i] = str[i]+13;
                else
                    str[i] = ((str[i] + 13)-26);
            }
            else if (str[i]>='a' && str[i]<='z' )
            {
              if(str[i]<'n')
                    str[i] = str[i]+13;
                else
                    str[i] = ((str[i] + 13)-26);
            }
        }
        printf("%s\n",str);
    }
}
