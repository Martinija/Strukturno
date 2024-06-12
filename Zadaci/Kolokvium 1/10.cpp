#include <iostream>
using namespace std;
int main(){
    int broj;

    while(cin>>broj){
        if(broj < 10) continue;

        int temp = broj;
        bool posledenMal = (temp % 10 < (temp/10)%10);

        while(temp){
            int b1 = temp % 10;
            temp /= 10;

            int b2 = temp % 10;

            if(posledenMal){
                if(b1 >= b2) break;
            }else{
                if(b1 <= b2) break;
            }

            posledenMal = !posledenMal;
        }

        if(temp == 0)
            cout<<broj<<endl;

    }

    return 0;
}
