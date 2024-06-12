#include <iostream>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
#define MAX 100

int main() {
    int uplata;
    cin >> uplata;
    cin.ignore();
    char maxShifra[11];
    float Maxkof=INT8_MIN;
    double dobivka=1.0,Maxtip;
    while (true) {
        float kof;
        int tip;
        char shifra[11];
        cin>>shifra;
        if (shifra[0] == '#' && shifra[1] == '\0') {
            break;
        }
        cin>>tip;
        cin>>kof;
        if(Maxkof<kof)
        {
            strcpy(maxShifra,shifra);
            Maxkof=kof;
            Maxtip=tip;
        }
        dobivka*=kof;

    }
     double Maxdobivka=uplata*dobivka;
    cout<<maxShifra<<" "<<Maxtip<<" "<<Maxkof<<endl;
    cout<<Maxdobivka<<endl;
    return 0;
}
