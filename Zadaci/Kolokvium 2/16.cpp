#include <iostream>
#include <cmath>
using namespace std;
int maksimalna(int a,int max)
{
    if(a==0)
    {
        return max;
    }
    else {
        int poslednaCifra=a%10;
        if(max<poslednaCifra)
        {

            max=poslednaCifra;
            return maksimalna(a/10,max);

        }
        else{
            return maksimalna(a/10,max);

        }

    }

}
int main()
{
    int a,brojach=0,n=0;
    char c;
    int max=INT8_MIN;
    while(cin>>a)
    {
        if(a==c)
        {
            break;
        }
        brojach++;
        n++;
        if(n>=100)
        {
            break;
        }
       if(a==0) {
             cout<<"0"<<endl;
           
       }
       else
       {
           cout << maksimalna(a, max) << endl;
       }
    }

    return 0;

}
