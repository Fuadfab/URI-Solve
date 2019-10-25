#include<iostream>
#include<string>
using namespace std;
int main()
{
    double a,b,c;
    string ch;
    cin >> a >> b  >> c;
    cout << std::fixed << setprecision(2) << (a+b+c)/3 << endl;
    return 0;
}
