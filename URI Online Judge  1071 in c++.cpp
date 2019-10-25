#include<iostream>
using namespace std;
int main()
{
    int x,y,n,temp,sum = 0;
    cin >> x >> y;
    if(x>y)
    {
        temp = x;
        x = y;
        y =temp;
    }
    if(x%2 ==  0)
       {
           x++;
           n = x;
       }
    else
        n+=2;
    for(int i = n;i < y;i+=2)
    {
        sum+=i;
    }
    cout << sum << endl;
    return 0;
}
