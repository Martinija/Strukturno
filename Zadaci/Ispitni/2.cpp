#include <iostream>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
#define MAX 400
int main()
{
   int n;
   cin>>n;
   int dolzhina= ceil(sqrt(n));//dava najbliskiot cel broj od kvadratot na n
   int array[100][100];
   int currentNumber=1;
   for(int i=0; i<dolzhina;i++)
   {
       if(i%2==0)
       {
           for(int j=0;j<dolzhina;j++)
           {
               if(currentNumber<=n)
               {
                   array[j][i]=currentNumber;
                   currentNumber++;
               }
               else
               {
                   array[j][i]=0;
               }
           }
       }
       else
       {
           for(int j=dolzhina-1;j>=0;j--)
           {
               if(currentNumber<=n)
               {
                   array[j][i]=currentNumber;
                   currentNumber++;
               }
               else
               {
                   array[j][i]=0;
               }
           }
       }
   }
   for(int i=0; i<dolzhina;i++)
   {
       for(int j=0;j<dolzhina;j++)
       {
           cout<<array[i][j]<<" ";
       }
       cout<<endl;
   }
   return 0;
}
