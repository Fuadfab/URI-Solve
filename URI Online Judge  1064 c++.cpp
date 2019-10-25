#include<iostream>
using namespace std;
int main()
{
    double n,ava,total;
    int i,c=0;
    for(i=1;i<=6;i++)
    {
        cin >> n;
        if(n > 0)
        {
            c++;
            ava+=n;
        }
        total = ava/c;
    }
    cout <<c <<"valores positivos" << endl;
    cout << total << endl;
    return 0;
}
