#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,M;
    double d1=0,d2=0,d3=0,d4=0,d5=0,sum=0;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> N >> M;
        if(N==1001)
        {
            d1=(1.50)*M;
        }
        else if(N==1002)
        {
            d2=(2.50)*M;
        }
        else if(N==1003)
        {
            d3=(3.50)*M;
        }
        else if(N==1004)
        {
            d4=(4.5)*M;
        }
        else if(N==1005)
        {
            d5=(5.50)*M;
        }

    }
         sum = d1+d2+d3+d4+d5;
       cout<< std::fixed << std::setprecision(2)<< sum << endl;

}
