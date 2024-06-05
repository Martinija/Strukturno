#include <iostream>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
#define MAX 400
int main()
{
    int m,n;
    cin>>m>>n;
    int r,k;
    cin>>r>>k;
    int a[100][100];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int min=INT8_MAX;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(min>a[i][j])
            {
                min=a[i][j];
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<r && j<k)
            {
                a[i][j]=min;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
