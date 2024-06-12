#include <iostream>
#include <cmath>
using namespace std;

int deliteli(int n){
    int sum = 1;
    for (int i = 2; i< n ; ++i){
        if (n%i == 0){
            sum += i;
        }
    }
    return sum;
}
int sumaNadeliteli(int n){
    int maxSum = 0;
    int result = 0;
    for (int i = 1; i<n; ++i){
        int CurrentSum = deliteli(i);
        if (CurrentSum>maxSum){
            maxSum = CurrentSum;
            result = i;
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int result =sumaNadeliteli(n);
    cout<<result;
    return 0;
}


