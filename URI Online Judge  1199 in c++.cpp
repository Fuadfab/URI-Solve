#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string ch;
    while(getline(cin,ch))
    {
        n = atoi(ch.c_str());
        if(n<0){return 0;}

        if(ch[1] == 'x')
        {
            istringstream(ch) >> std::hex >> n;
            cout << std::dec << n << endl;
        }
        else
        {
            cout <<"0x" << std::hex << uppercase << n <<endl;
        }
    }
    return 0;
}
