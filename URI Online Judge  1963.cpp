#include<iostream>
#include<iomanip>

using namespace std;
void partent(double a,double b)
{
    double c,d;
    c = b-a;
    d = (c/a)*100;
    cout << fixed << setprecision(2) << d << "%" <<endl;
}
int main()
{
    double x,y;
    cin >> x >> y;
    partent(x,y);
    return 0;
}
