#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
using namespace std;
int main() {
   char niza[1000];
   char maksniza[1000];
   int maxDolzhina=0;
   while(cin.getline(niza,1000))
   {
       if(niza[0]=='0' && niza[1]=='\0')
       {
           break;
       }
       int dolzhina= strlen(niza);
       int brojach=0;
       for(int i=0;i<dolzhina;i++)
       {
           if(isdigit(niza[i]))
           {
               brojach++;
           }
       }
       if(brojach>=2 &&dolzhina>=maxDolzhina )
       {
           maxDolzhina=dolzhina;
           strcpy(maksniza,niza);
       }
   }
   int firstDigit=-1;
   int lastDigit=-1;
   for(int i=0;i<maxDolzhina;i++)
   {
       if(isdigit(maksniza[i])){

           if(firstDigit==-1)
           {
               firstDigit=i;
           }
           lastDigit=i;
       }

   }
   if(firstDigit!=-1 && lastDigit!=-1)
   {
       for(int i=firstDigit;i<=lastDigit;i++)
       {
           cout<<maksniza[i];
       }
   }
}
