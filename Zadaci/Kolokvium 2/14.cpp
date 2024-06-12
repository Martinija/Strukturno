#include <iostream>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    int n,a[100][100],b[100][100];
    cin>>n;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 2 * n; ++j) {
                cin >>a[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 2 * n; ++j) {
                if (j < n) {

                    b[i][j] = a[i][j];
                } else {
                    b[i + n][j - n] = a[i][j];
                }
            }
        }
        for (int i = 0; i < 2 * n; ++i) {
            for (int j = 0; j <n; ++j) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    return 0;
}
