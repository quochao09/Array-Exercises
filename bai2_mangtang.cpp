#include<iostream>
#include<cmath>
using namespace std;
void input(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"] = "; cin>>a[i];
    }
}
bool checK(int a[], int n){
    for(int i=0; i<n-2; i++){
         //(i==n-1 && a[n-1]>a[n-2]) (a[i]<a[i+1])
         if(a[i]>=a[i+1]){
             return false;
         }
    }
    return true;
}

int main(){
    int n;
    do{
        cout<<"Nhap so luong phan tu n = "; cin>>n;
    } while((n<1)||(n>pow(10,6)));
    int a[n];
    input(a,n);
    if(checK(a,n)==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}