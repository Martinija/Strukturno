#include <iostream>
#include <cmath>
using namespace std;

int BrojPozitivni(int niza[], int n)
{

    if(n==-1)
    {
        return 0;
    }
    else
    {
        if(niza[n-1]>0) {
            return 1+ BrojPozitivni(niza, n - 1);
        }
        else if(niza[n-1<0]){
            return BrojPozitivni(niza, n - 1);
        }
    }

}
int main()
{
    int n, a[100];
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    int rezultat= BrojPozitivni(a,n);
    cout<<rezultat<<endl;
}
