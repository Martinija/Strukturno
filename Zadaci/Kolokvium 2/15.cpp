#include <iostream>
#include <cmath>
using namespace std;
int poramnuvanje(int broj) {
    if (broj == 0) {
        return broj;
    } else {
        if (broj % 10 == 9) {
            broj = broj / 10 * 10 + 7;
        }
        return broj % 10 + 10 * poramnuvanje(broj / 10);
    }
}
int main() {
    int n=0, count=0;
    int a[100];
    while(cin>>n){
        int rez = poramnuvanje(n);
        a[count]=rez;
        count++;
    }
    for(int i=0; i<count;i++)
    {
        for(int j=0; j<count-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    if(count<5)
    {
        for(int i=0; i<count;i++) {
            cout << a[i] << " ";

        }
  
    }
    else
    {
        for(int i=0; i<5; i++)
        {
            cout<<a[i]<<" ";
        }
        
    }
    return 0;

}
