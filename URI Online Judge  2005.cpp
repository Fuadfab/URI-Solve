#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e,cou = 0;;
    cin >> n;
    cin >> a >> b >> c >> d >> e;
    if(n == a || n == b || n==c || n==d || n == e)
    {
        cou++;
    }
    cout << cou << endl;
    return 0;

}
