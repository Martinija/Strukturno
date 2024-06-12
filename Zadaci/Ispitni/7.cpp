#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <iomanip>
using namespace std;
void premesti(int a[],int n)
{
    int b[100],c[100],d[1000];
    int k=0 ,l=0;
    for(int i=0;i<n;i++)
     {
        if(a[i]<0)
        {
            b[k]=a[i];
            k++;
        }
        else if(a[i]>=0)
         {
            c[l]=a[i];
            l++;
        }

    }
    for(int i=0;i<l;i++)
    {
        d[i]=c[i];
    }
    for(int i=0;i<l+k;i++)
     {
        d[l+i]=b[i];
     }
    for(int i=0;i<l+k;i++)
     {
        cout<<d[i]<<" ";
    }
}
int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    premesti(a,n);
    return 0;


}
