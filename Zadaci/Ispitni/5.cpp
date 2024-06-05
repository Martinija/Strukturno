#include <iostream>
using namespace std;

#define MAX 50


int main(){

    int i,j, row, column;

    float a[MAX][MAX];
    float b[MAX][MAX];

    cin>>row>>column;

    for (i=0; i<row; ++i){
        for (j=0; j<column; ++j){
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }
    }

    int br,bc;
    int er, ec;
    cin>>br>>bc;
    cin>>er>>ec;
    
    int count = 0;
    for(i = br; i <= er; i++){
        for(j = bc; j <= ec; j++){
            count=0;
            if (i==0 && j==0 ){

                b[i][j] +=  a[i+1][j] +
                        a[i+1][j+1] +
                        a[i][j+1];

                count = 4;
            }
            else if (i==0 && j==(column-1) ){
                b[i][j] +=   a[i+1][j] +
                        a[i+1][j-1] +
                        a[i][j-1];

                count = 4;
            }
            else if (i==(row-1) && j==0 ){
                b[i][j] +=   a[i-1][j] +
                        a[i-1][j+1] +
                        a[i][j+1];

                count = 4;
            }
            else if (i==(row-1) && j==(column-1) ){
                b[i][j] +=   a[i-1][j] +
                        a[i-1][j-1] +
                        a[i][j+-1];

                count = 4;
            }
            else if (i==0) {
                b[i][j] += a[i][j-1] +
                        a[i][j+1] +
                        a[i+1][j-1] +
                        a[i+1][j] +
                        a[i+1][j+1];

                count = 6;
            }
            else if (i==(row-1)) {
                b[i][j] += a[i][j-1] +
                        a[i][j+1] +
                        a[i-1][j-1] +
                        a[i-1][j] +
                        a[i-1][j+1];

                count = 6;
            }
            else if (j==0) {
                b[i][j] += a[i-1][j] +
                        a[i+1][j] +
                        a[i-1][j+1] +
                        a[i+1][j+1] +
                        a[i][j+1];

                count = 6;
            }
            else if (j==(column-1)) {
                b[i][j] += a[i-1][j] +
                        a[i+1][j] +
                        a[i-1][j-1] +
                        a[i+1][j-1] +
                        a[i][j-1];

                count = 6;
            }
            else {
                b[i][j] +=
                        a[i-1][j-1] +
                        a[i-1][j] +
                        a[i-1][j+1] +
                        a[i][j-1] +
                        a[i][j+1] +
                        a[i+1][j-1] +
                        a[i+1][j] +
                        a[i+1][j+1];

                count = 9;
            }

            b[i][j]/=count;

        }
    }

    
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}
