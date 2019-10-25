#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N1,N2;
    while(cin >> T && T!=0)
    {
        int cou=0;
        int cou1=0;
        for(int i=0;i<T;i++)
        {
            cin >> N1 >> N2;
            if(N1>N2)
              cou++;
            if(N2>N1)
              cou1++;
        }
        cout << cou <<" "<< cou1 <<endl;
    }
    return 0;
}
