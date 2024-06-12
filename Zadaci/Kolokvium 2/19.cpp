#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <iomanip>
using namespace std;
//a=97,z=122
void pomestuvanje(char niza[],int x)
{
    if(*niza=='\0')
    {
        return;
    }
    else {
    if(isupper(*niza))
    {
        *niza='A'+(*niza-'A'+x)%26;
    }
    else if(islower(*niza))
    {
        *niza='a'+(*niza-'a'+x)%26;
    }
    return pomestuvanje(niza+1,x);
    }
}
int main() {
    int n,x;
    cin>>n>>x;
    cin.ignore();
    char niza[80];
    char azbuka[]={"abcdefghijklmnopqrstuvwxyz"};
    char golemaAzbuka[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    for(int i=0;i<n;i++)
    {
        cin.getline(niza,80);
        /*for(int j=0; j< strlen(niza);j++)
        {
            if(isupper(niza[j]))
            {
                niza[j]=golemaAzbuka[(niza[j]-'A'+x)%26];
            }
            else if(islower(niza[j]))
            {
                niza[j]=azbuka[(niza[j]-'a'+x)%26];
            }
        }
         */

        pomestuvanje(niza,x);
        cout<<niza<<endl;

    }
    return 0;
}
