#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int n,m,a[100][100];
   cin>>n>>m;
   for(int i=0; i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
   }
   
    for(int i=0; i<n;i++)
    {
        int brojach=0;
        for(int j=0;j<m;j++)
        {
           if(a[i][j]%2==0 && (i+j)%2==0)
           {
               brojach++;
           }
           else if(a[i][j]%2!=0 && (i+j)%2!=0)
           {
               brojach++;
           }
        }
        cout<<i<<": "<<brojach<<endl;
    }
    return 0;
}

