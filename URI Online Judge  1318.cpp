#include<iostream>
using namespace std;
int main()
{
    int array[10];
    int n,m,i,j,coun = 0,min,matc;
    while(1)
    {
        cin >> n >> m;
        if(n == 0 && m == 0)
            break;
        for(i=0;i<m;i++)
        {
            cin >> array[i];
        }
        for(i=0;i< m-1;i++)
        {
            min = array[i];
            for(j=i+1;j<m;j++)
            {
                if(array[j] == min)
                {
                    matc = array[j];
                    coun++;
                }
            }
        }
        cout << coun << endl;
    }
    return 0;
}
