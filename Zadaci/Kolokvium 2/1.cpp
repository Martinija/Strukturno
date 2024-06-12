#include <iostream>
#include <cstring>
using namespace std;
bool samoglaska(char a){
    if (a=='a' || a=='e' || a=='i'||  a=='o'||  a=='u'||  a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    return true;
    return false;
}

int main(){
    char a[1000];
    int paroj=0;
    while(cin.getline(a,1000)){
        for (int i = 0; i < strlen(a); ++i) {
            if(samoglaska(a[i]) && samoglaska(a[i+1])){
                cout << (char)tolower(a[i]) << (char)tolower(a[i + 1]) << endl;
                paroj++;
            }
        }
        if(a[0]=='#'){
            break;
        }
    }
    cout<<paroj<<endl;
    return 0;
}
