#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int samoglaski(char niza[], int brojach)
{
   for(int i=0;i< strlen(niza);i++)
   {
       if(isalpha(niza[i])) {
           int zborovi = 0;
           while (i < strlen(niza) && isalpha(niza[i])) {
               zborovi++;
               i++;
           }
       if(zborovi >= 1 && zborovi <= 3) {
               brojach++;
           }
       }
   }
   return brojach;
}
int main() {
    char niza[100];
    char maksniza[100];
    int maks=-1;
    while(cin.getline(niza,sizeof(niza)) && strlen(niza)>0)
    {
        int brojach= samoglaski(niza,0);
        if(brojach>maks)
        {
            maks=brojach;
            strcpy(maksniza,niza);
        }

    }
cout<<maks<<": "<<maksniza<<endl;
    return 0;
}
