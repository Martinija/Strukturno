#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void nullNiza(int *array, int size){
    for(int i = 0; i<size;i++)
        array[i]=0;
}
void printArray(int *array, int size){
    for(int i = 0; i<size; i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
void pomestiDesno(int *array, int size, int element){
    int i;
    for(int i = size-1; i>=element; i--)
        array[i]=array[i-element];
    for(i = 0; i<element; i++)
        array[i]=0;
}
void pomestiLevo(int *array, int size, int element){
    int i;
    for(i = 0; i<=size-element; i++)
        array[i]=array[i+element];
    for(i=size-element; i<size; i++)
        array[i]=0;
}
int transform(int *array, int size){
    int i;
    int firstElement = array[0];
    if(abs(firstElement)>=size){
        nullNiza(array, size);
        return 1;
    }
    if(firstElement>=0)
        pomestiDesno(array, size, firstElement);
    else
        pomestiLevo(array, size, abs(firstElement));
    return 0;
}
int main() {
    int m, n;
    cin>>m;
    int array[100];
    int nizaSoNuli=0;
    for(int i = 0; i<m; i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>array[j];
        }
        nizaSoNuli+= transform(array, n);
        printArray(array, n);
    }
    cout<<nizaSoNuli;
}
