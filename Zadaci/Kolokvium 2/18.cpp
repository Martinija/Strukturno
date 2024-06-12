#include <iostream>
#include <cmath>
using namespace std;
#define max 100
int main() {

    int n;
    cin>>n;
    float a[max][max];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    float sum_glavna_dijagonala=0,sum_sporedna_dijagonala=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
           if(i>j)
           {
               sum_glavna_dijagonala+=a[i][j];
           }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i+j>n-1)
            {
                sum_sporedna_dijagonala+=a[i][j];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i+j==n-1 && i==j)
            {
                a[i][j]=sum_sporedna_dijagonala+sum_glavna_dijagonala;
            }
            else if(i+j==n-1)
            {
                a[i][j]=sum_sporedna_dijagonala;
            }
            else if(i==j)
            {
                a[i][j]=sum_glavna_dijagonala;
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
