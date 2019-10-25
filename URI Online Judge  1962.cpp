#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,N,Y;
    cin >> t;
    while(t--)
    {
        cin >> N;
        if(N>2015)
        {
            Y = N -2014;
            cout << Y <<" A.C" <<endl;
        }
        else if(N<2015)
        {
            Y = 2015 - N;
            cout << Y << " D.C." <<endl;
        }
        else
            cout << "1 A.C" <<endl;
    }
    return 0;
}
