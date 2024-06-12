#include <iostream>
#include <cmath>
#define max 100
using namespace std;
int main()
{
    int x,n,m,a[max][max];
    cin>>x;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int sumredot;
    for(int i=0;i<n;i++)
    {
        sumredot=0;
        for(int j=0;j<m;j++) {

            sumredot+=a[i][j];
        }
        for(int z=0;z<m;z++)
        {
            if(sumredot==x)
            {
                a[i][z]=0;
            }
            else if(sumredot>x)
            {
                a[i][z]=1;
            }
            else if(sumredot<x)
            {
                a[i][z]=-1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
