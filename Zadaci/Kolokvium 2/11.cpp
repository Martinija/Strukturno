#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    char niza[100];
    while(true) {
        cin.getline(niza, 100);
        if(niza[0]=='#' && niza[1]=='\0')
        {
            break;
        }
        int brojach=0;
        char podniza[100];
        for(int i=0; i< strlen(niza);i++)
        {
            if(isdigit(niza[i]))
            {
                podniza[brojach]=niza[i];
                brojach++;
            }
        }
        for(int i=0;i<brojach;i++)
        {
            for(int j=0;j<brojach-1;j++)
            {
                if(podniza[i]<podniza[j])
                {
                    int temp=podniza[i];
                    podniza[i]=podniza[j];
                    podniza[j]=temp;
                }
            }
        }
        cout<<brojach<<":";
        for (int i = 0; i <brojach; i++) {
            cout << podniza[i];
        }
        cout<<endl;
    }
    }
