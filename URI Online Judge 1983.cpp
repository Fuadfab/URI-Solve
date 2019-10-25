#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long int a,c;
    double b,d=0;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> a >> b;
        if(b>d)
        {
            d = b;
            c = a;
        }
    }
    if(b<8)
        cout << "Minimum note not reached" << endl;
        else
        cout << c << endl;
    return 0;
}
