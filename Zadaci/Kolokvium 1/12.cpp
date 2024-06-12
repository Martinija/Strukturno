#include <iostream>
#include <cmath>
using namespace std;
int main() {
 int poz0,poz1,poz2,poz3,poz4;
 poz0=poz1=poz2=poz3=poz4=0;
 int x;
 while(cin>>x)
 {
     int pozicija = 0;
     int maxPoz=0;
     int max=INT8_MIN;
    while(x!=0)
    {
       int cifra;
        cifra=x%10;
        x=x/10;
        if(cifra>max)
        {
            max=cifra;
            maxPoz = pozicija;
        }
        pozicija++;
    }
     switch (maxPoz) {
         case 0:
             poz0++;
             break;
         case 1:
             poz1++;
             break;
         case 2:
             poz2++;
             break;
         case 3:
             poz3++;
             break;
         case 4:
             poz4++;
             break;
         default:
             continue;
     }
 }
 cout<<"0: "<<poz0<<endl;
 cout<<"1: "<<poz1<<endl;
 cout<<"2: "<<poz2<<endl;
 cout<<"3: "<<poz3<<endl;
 cout<<"4: "<<poz4<<endl;
}









