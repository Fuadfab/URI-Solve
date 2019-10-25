#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d,v,e;
    cin >> n >> m;
    int array[m];
    for(int i=0;i<m;i++)
    {
        cin >> array[i];
    }
    for(int i=1;i<m;i++)
    {

        d = array[i]-array[i-1];
        e = array[i-1]-array[i];
        if(d == '-' || e == '-')
        {
            d=(d*-1);
            e=(e*-1);
        }
        if(d>n || e>n)
        {
            v=1;
            break;
        }
        else
            v=0;

    }
    if(v==1)
        cout << "GAME OVER" << endl;
    else
        cout <<"YOU WIN" <<endl;
   return 0;
}
