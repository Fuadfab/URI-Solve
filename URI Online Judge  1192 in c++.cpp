#include <iostream>
using namespace std;
int main()
{
    int n,a_i,c_i,res;
    char A,B,C;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
       cin >> A >> B >> C;
       cin.ignore();
       a_i = A - '0';
       c_i = C - '0';

    if(a_i == c_i)
    {
      res = a_i * c_i;
    }
    else
    {
        if(B >= 97 && B <= 122)
        {
        res = a_i + c_i;
        }else
        {
        res = c_i - a_i;
        }
    }

       cout << res << endl;
    }

 return 0;
}
