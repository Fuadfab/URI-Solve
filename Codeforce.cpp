#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,L,a,sum=0;
     cin >> n >>L >>a;
     int t[n],l[n];
     if(n==0)
     {
         sum = L/a;
     }
     else
     {
         for(int i=0;i < n;i++)
         {
             cin >> t[i] >> l[i];
         }
         for(int i=0;i < n-1;i++)
         {
              if((t[i+1] - (t[i]+l[i]))>= a)
              {
                 sum++;
              }
          }
          int x = L - (t[n-1]+l[n-1]);

          sum += (x/a);
     }

     cout << sum << endl;
}
