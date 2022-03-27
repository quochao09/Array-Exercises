#include <iostream>
#include <cmath>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"] = "; cin>>a[i];
    }
}
void lineland(int a[], int n){
    int max1=0, max2=0, min1=0, min2=0, max=0;
    int h=0;
    for(int i=0; i<n; i++){
        if(i==0){
            cout<<(a[1]-a[0])<<" "<<(a[n-1]-a[0]);
            cout<<endl;
        }
        else if(i == n-1){
            cout<<(a[n-1]- a[n-2])<<" "<<(a[n-1]-a[0]);
        }
        else{
            max1 = a[i] - a[0];
            max2 = a[n-1] - a[i];
            min1 = a[i] - a[i-1];
            min2 = a[i+1] - a[i];

            if(min1 < min2){
                cout<<min1<<" ";
            }
            else{
                cout<<min2<<" ";
            }
            if((max1>max2)){
                cout<<max1<<" ";
            }
            else{
                cout<<max2<<" ";
            }
            cout<<endl;
        }
//Cách khác để tìm max, min
// int max(int a, int b){
//      if(a>b) return a>b;    
//}
    }
}

int main(){
    int n;
    do{
        cout<<"Nhap so luong phan tu n = "; cin>>n;
    } while((n<2)||(n>pow(10,5)));
    int a[n];
    input(a,n);
    lineland(a,n);
    return 0;
}
