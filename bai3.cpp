#include <iostream>
#include <cmath>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"] = "; cin>>a[i];
    }
}

int main(){
    int n;
    do{
        cout<<"Nhap so luong phan tu n = "; cin>>n;
    } while((n<1)||(n>pow(10,6)));
    int a[n];
    input(a,n);
    int max = a[0];
    for(int i=0; i<n; i++){
        if(a[i] >= max){
            cout<<a[i]<<"\t";
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    return 0;
}