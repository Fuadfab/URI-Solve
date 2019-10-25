#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin >> N >> M;
    if(N==M)
    {
        cout << N <<endl;
    }
    else
    {
        if(N>M)
            cout << N<<endl;
        else
            cout << M<<endl;
    }
    return 0;
}
