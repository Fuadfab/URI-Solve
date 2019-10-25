#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,m,k,d=0,e=1;
    cin >> N;
    int array[N];
    for(int i=0;i<N;i++)
    {
        cin >> array[i];

    }
    k=array[N];
    for(int i=0;i<N;i++)
    {
        if(array[i]<k);
        {
            k=array[i];
            e = d+1;
        }

    }
      cout << e <<endl;
    return 0;
}
