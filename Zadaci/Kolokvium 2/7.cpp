#include <iostream>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    int n, m, suma;
    cin >> n >> m;
    int matrica[100][100];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cin >> matrica[i][j];
    }
    int k;
    double as;
    int niza[100];
    int br = 0;
    for(int i = 0; i < n; i++) {
        suma=0;
        for(int j = 0; j < m; j++) {
            suma+=matrica[i][j];
        }
        as=(double)suma/m;
        k=0;
        double maks = fabs(as-matrica[i][0]);
        for(int j = 0; j<m; j++){
            if(fabs(as-matrica[i][j])>maks) {
                maks = fabs(as - matrica[i][j]);
                k=j;
            }
        }
        niza[i] = matrica[i][k];
    }
    for(int i = 0; i<n; i++)
        cout<<niza[i]<<" ";

}
