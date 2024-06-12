#include <iostream>
#include <cmath>
#define max 100
using namespace std;
int main()
{
        int n,m,a[max][max];
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
   int sum1=0,sum2=0,sum3=0,sum4=0;
    int c,b;
    cin>>c>>b;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

                if(i<c && j<b)
                {
                    sum2+=a[i][j];
                }
                else if(i<c && j>=b)
                {
                    sum1+=a[i][j];
                }
                else if(i>=c && j<b)
                {
                    sum3+=a[i][j];
                }
               else if (i>=c && j>=b)
                {
                    sum4+=a[i][j];
                }
        }
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4<<endl;
}
