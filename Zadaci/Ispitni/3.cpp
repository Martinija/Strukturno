#include <iostream>
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main() {
   int n;
   cin >> n;
   cin.ignore();
   char novaniza[4] = {'a', '1', 'c', '\0'};
   for (int k = 0; k < n; k++) {
       char niza[51];
       cin.getline(niza, 51);
       int dolzina = strlen(niza);
       int count = 0;
       for(int i=0;i<dolzina;i++){
           niza[i]=tolower(niza[i]);
       }
       for (int i = 0; i < dolzina - 2; i++) {
           if (strncmp(niza + i, novaniza, 3) == 0) {
               count++;
               if (count >= 2) {


                   cout << niza << endl;
                   break;
               }
           }
       }
   }
   return 0;
}
