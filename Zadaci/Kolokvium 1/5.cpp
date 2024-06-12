#include <iostream>
#include <cmath>
using namespace std;
int main() {

     int x,y;
     cin>>x>>y;
     if(x<=0 || y<=0)
     {
         cout<<"Invalid input"<<endl;

     }
     else
     {
         if(y>x)
         {
             int temp=y;
             y=x;
             x=temp;
         }
        int parnapozicija=0;
         while(x>0)
         {
             int digit=(x/10)%10;
             parnapozicija=parnapozicija*10+digit;
             x/=100;

         }
         
         int inverse=0;
         while(parnapozicija>0)
         {
             int broj=parnapozicija%10;
             inverse=inverse*10+broj;
             parnapozicija/=10;
         }
         
         if(inverse==y)
         {
             cout<<"PAREN"<<endl;
         }
         else
         {
             cout<<"NE"<<endl;
         }
     }
    return 0;
}





