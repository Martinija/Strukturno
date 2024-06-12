#include <iostream>
#include <cmath>
using namespace std;
 int main()
 {
     int broj;
     cin>>broj;
     float procent;
     int x,y,brojach=0;
     float counter=0;
     while(cin>>x>>y) {
         if (x == 0 && y == 0)break;
         if (x + y == broj)
         {
             brojach++;
         }
         counter++;
     }
     cout<<"Vnesovte "<<brojach<<" parovi od broevi chij zbir e "<<broj<<endl;
     procent=((float)brojach/counter )*100;
     cout<<"Procentot na parovi so zbir "<<broj<<" e "<<procent<<"%"<<endl;
     return 0;
 }






