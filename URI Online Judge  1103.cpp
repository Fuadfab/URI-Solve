#include<iostream>

using namespace std;
int main()
{
    int a,b,c,d;
    int i,f;
    while(1)
    {
        cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;
        if(a == 0)i = 24*60+b;
        else i = a*60+b;
        if(c == 0)f = 24*60+d;
        else f = c*60+d;
        if(f>i)cout << (f-i) << endl;
        else
            cout << 24*60-(i-f) << endl;
    }
    return 0;
}
