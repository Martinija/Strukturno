#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int matrica[1000][1000];
   int counter=0;
   int n, m, broj=0;
   cin>>n>>m;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>matrica[i][j];
       }
   }
    for(int j=0;j<m;j++){
        counter=0;
        for(int i=0;i<n;i++){
            broj=i;
            if(j<=9){
                broj=broj*10+j;
            }
            else if(j>=10 && j<=99){
                broj=broj*100+j;
            }
            else if(j>99 && j<=999){
                broj=broj*1000+j;
            }
            if(matrica[i][j]==broj){
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}
