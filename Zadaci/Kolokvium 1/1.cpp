#include <iostream>
using namespace std;
int main(){
    int start, end;
    cin>> start >> end;
    for(int i = start; i<=end; i++){
        int num = i;
        while (num!=0){
            if (num % 10 % 2 != 0) {
                break;
            }
            num /=10;
        }
        if (num==0) {
            cout<<i; break;
        }
        else if (i==end) cout<<"NE";
    }
    return 0;
}
