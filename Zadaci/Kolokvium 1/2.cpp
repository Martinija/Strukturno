#include <iostream>
#include <cmath>
using namespace std;
int main() {

    int n;
    cin>>n;
    if(n<10)
    {
        cout<<"Brojot ne e validen"<<endl;

    }
    else {
        for(int i=n-1;i>0;i--)
        {
            int temp=i;
            int inverse=0,brojach=0;
            while(temp)
            {
                int digit=temp%10;
                inverse=inverse*10+digit;
                temp/=10;
                brojach++;
            }
            if(inverse%brojach==0)
            {
                cout<<i<<endl;
                break;
            }
        }

    }
    return 0;
}






    
   
