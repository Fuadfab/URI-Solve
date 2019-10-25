#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,c=0,sum=0;
    cin >> x;
    int array[x];
    for(int i=0;i<x;i++)
    {
        cin >> array[i];
        if(array[i]%2 == 1)
        {
            c++;
        }
        sum += array[i];
    }
    cout << c << " " << sum-c <<endl;
    return 0;
}
