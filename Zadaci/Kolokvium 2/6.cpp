#include <iostream>
using namespace std;
#define max 100
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
        int brojach, brojachredovi=0, brojachkoloni=0;
        for(int i=0; i<n; i++)
        {
            brojach=0;
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    brojach++;
                }
                else
                {
                    if(brojach<3)
                    {
                        brojach=0;
                    }
                }

            }
            if(brojach>=3)
            {
                brojachredovi++;
            }
        }

    for(int i=0; i<m; i++)
    {
          brojach=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]==1)
            {
                brojach++;
            }
            else
            {
                if(brojach<3)
                {
                    brojach=0;
                }
            }

        }
        if(brojach>=3)
        {
            brojachkoloni++;
        }
    }
    cout<<(brojachredovi+brojachkoloni)<<endl;

}
