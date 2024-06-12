#include <iostream>
#include <cmath>
using namespace std;
float dropka(float a[],int n,int i)
{
    if(i==n)
    {
        return (1/a[n]);
    }
    else {
        return a[i]+(1/dropka(a,n,i+1));
    }
}
int main() {
    int n;
    float a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    float rez= dropka(a,n,0);
    cout<<rez<<endl;
}

