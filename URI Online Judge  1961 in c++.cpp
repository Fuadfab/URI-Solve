#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int array[9];
    for(int i=0;i<m;i++)
    {
        cin >> array[i];

    }
    for(int i=0;i<m;i++)
    {
        if(array[i]>m)
        {
        }
       else  {cout << "YOU WIN" << endl;}
    }


    return 0;
}
