#include <iostream>
using namespace std;
int main()
{
   while(true)
   {
       int n;
       cin>>n;
       if(n==0)
       {
           break;
       }
       int a[100];
       for(int i=0; i<n;i++)
       {
           cin>>a[i];
       }
      int maks=INT8_MIN;
       int broj, najgolem;
       for(int i=0;i<n;i++)
       {
           broj=a[i];
           while(broj>9)
           {
               broj/=10;
           }
           if(broj>maks)
           {
               maks=broj;
               najgolem=a[i];
           }
       }
       cout<<najgolem<<endl;
   }
   return 0;
}
