#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    char z1,z2;
    cin>>z1>>z2;
    cin.ignore();
    char niza[80];
    while(true)
    {
        cin.getline(niza,100);
        if(niza[0]=='#' && niza[1]=='\0')
        {
            break;
        }
        int prvonaogjanje=-1,vtoropronaoganje=-1;
        for(int i=0; i<strlen(niza);i++)
        {
            if(niza[i]==z1)
            {
                prvonaogjanje=i;
            }
            if(niza[i]==z2)
            {
                vtoropronaoganje=i;
            }
        }
        for(int i=prvonaogjanje+1;i<vtoropronaoganje;i++)
        {
            cout<<niza[i];
        }
        cout<<endl;
    }
    return 0;
}
