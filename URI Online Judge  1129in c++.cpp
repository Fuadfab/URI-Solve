#include<iostream>
using namespace std;
int main()
{
    int N,a,b,c,d,e;
    while(1)
    {
        cin >> N;
        if(N == 0)break;
        for(int i=1;i<=N;i++)
        {
            cin >> a >> b >> c >> d >> e;
            if(a<=127)
            {
                if(b<=127 || c<= 127 || d<=127 || e<=127)
                {
                    cout << "*" << endl;
                }
                else
                cout << "A" << endl;

            }
            else if(b <=127)
            {
                if(a<=127 || c<= 127 || d<=127 || e<=127)
                {
                    cout << "*" << endl;
                }
                else
                cout << "B" << endl;
            }
            else if(c <=127)
            {
                if(b <=127 || a<= 127 || d<=127 || e<=127)
                {
                    cout << "*" << endl;
                }
                else
                cout << "C" << endl;
            }
            else if(d <=127)
            {
                if(b<=127 || c<= 127 || a<=127 || e<=127)
                {
                    cout << "*" << endl;
                }
                else
                cout << "D" << endl;
            }
            else if(e <=127)
            {
                if(b<=127 || c<= 127 || d<=127 || a<=127)
                {
                    cout << "*" << endl;
                }
                else
                cout << "E" << endl;
            }
        }
    }
    return 0;
}
