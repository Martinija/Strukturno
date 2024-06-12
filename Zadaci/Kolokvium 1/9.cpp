#include <iostream>
#include <cmath>
using namespace std;
int main() {
    char c;
    int sum=0;
    while(cin>>c)
    {
        if(c=='.') break;
        switch(c){

            case '0'...'9':
                sum+= c-'0';
                break;
            case 'a'...'f':
                sum+= c - 'a' + 10; break;
            case 'A'...'F':
                sum+= c -'A' + 10;
                break;

            default: sum+=0;
        }

    }
    if(sum%16==0)
    {
        if(sum%10==6 && sum/10%10==1)
        {
            cout<<"Poln pogodok"<<endl;
        }
        else
        {
            cout<<"Pogodok"<<endl;
        }
    }
    else
    {
        cout<<sum<<endl;
    }
    return 0;
}
