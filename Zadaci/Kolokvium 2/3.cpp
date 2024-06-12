#include <iostream>
#include <cmath>
#include <cstring>
#include <cctype>
using namespace std;

    int sum_pos(int *p,int n,int ind)
    {
        if(ind>n)
        {
            return 0;
        }
        else
        {
            int sum=0;
            for(int i=ind; i<n;i++)
            {
                sum+=*(p+i);
            }
            return sum;
        }
    }
    int main()
    {
        int n;
        int array[100];
        int *a= array;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>*(a+i);
        }
        int ind;
        cin>>ind;
        cout<<sum_pos(a,n,ind);
        return 0;
    }
