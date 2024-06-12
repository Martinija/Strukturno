#include <iostream>
#include <cmath>
using namespace std;
#define max 100
int main() {

    int n, m;
    cin >> n >> m;
    int a[max][max];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int prvapolovina = 0;
        int vtorapolovina = 0;
        int aps = 0;
        if (m % 2 != 0) {
            for (int j = 0; j < m / 2; j++) {

                prvapolovina += a[i][j];
            }
            for (int z = m - 1; z > (m / 2); z--) {
                vtorapolovina += a[i][z];
            }
            aps = abs(prvapolovina - vtorapolovina);
            a[i][m / 2] = aps;
        } else {
            for (int j = 0; j < m / 2; j++) {

                prvapolovina += a[i][j];
            }
            for (int z = m - 1; z > (m / 2)-1; z--) {
                vtorapolovina += a[i][z];
            }
            aps = abs(prvapolovina - vtorapolovina);
            a[i][m / 2] = aps;
            a[i][(m / 2)-1]=aps;
            }
        }

    for(int i=0; i<n; i++)
    {
        for(int j=0;j<m;j++) {
            cout << a[i][j] << " ";
        }
        cout<<endl;
    }

return 0;
}
