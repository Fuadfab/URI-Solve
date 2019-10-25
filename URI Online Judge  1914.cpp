#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char str1[100],str2[6],str3[100],str4[6];
    long long int a,b;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> str1 >> str2 >> str3 >> str4 ;
        cin >> a >> b;
        a+=b;
        if(str2[0] =='I')
        {
            if(a%2==0){cout << str3 << endl;}
            else
                cout << str1 << endl;
        }
        else
        {
            if(a%2==0){cout << str1 << endl;}
            else
                cout << str3 << endl;
        }
    }
    return 0;
}
