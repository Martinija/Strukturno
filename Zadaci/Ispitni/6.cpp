#include <iostream>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
#define MAX 100
int par(int a[],int n)
{
    int flag = -1;
    int first = -1;
    int smallest = 0;
    for(int i = 0; i < n; i++){
        int current = a[i];
        int counter = 1;
        for(int j = 0; j < n; j++){
            if(i != j){
                if(a[j] == current){
                    counter += 1;
                }
            }
        }
        if(counter % 2 == 0){
            if(first == -1){
                flag = 1;
                first = 1;
                smallest = current;
            }else{
                if(current < smallest){
                    smallest = current;
                }
            }
        }
    }
    if (flag != -1) {
        return smallest;
    } else {
        return 0;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[MAX];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    int rez= par(a,n);
    if(rez==0)
    {
        cout<<"Nitu eden element ne se pojavuva paren broj pati! "<<endl;
    }
    else
    {
        cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<par(a,n)<<endl;
    }

}
