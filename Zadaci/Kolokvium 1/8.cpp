#include <iostream>
#include <cmath>
using namespace std;
int main()
    {
        int n,x;
        cin>>n>>x;
        bool najden;
        for(int i=n-1;i>0;i--)
        {
             najden=true;
            int temp=i,digit,broj;
            while(temp)
            {
                digit=temp%10;
                int temp_x=x;
                while(temp_x)
                {
                    broj=temp_x%10;
                    if(broj==digit)
                    {
                        najden= false;
                        break;
                    }
                    temp_x/=10;
                }
                temp/=10;
            }
            if(najden)
            {
                cout<<i<<endl;
                break;
            }
        }
        if(!najden)
        {
            cout<<0;
        }
        
        
        return 0;
    }

