#include <iostream>
#include <cmath>
using namespace std;

void input(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"] = "; cin>>a[i];
    }
}

void ticketcinema(int a[], int n){
    int max = 0;
    for(int i=0; i<n; i++){
        if(a[0]==50 || a[0]==100){
            cout<<"No";
            break;
        }
        else{
            if(a[i]==25){
                max += 25;
            }
            else if(a[i]==50){
                if(max >= 25){
                    max += 25;
                }
                else{
                    cout<<"No";
                    break;
                }
            }
            else if(a[i]==100){
                if(max >= 75){
                    max += 25;
                }
                else{
                    cout<<"No";
                    break;
                }
            }
        }
    }
    if(max ==(25*n)){
        cout<<"Yes"<<endl;
    }
}

int main(){
    int n;
    do{
        cout<<"Nhap so luong phan tu n = "; cin>>n;
    } while((n<2)||(n>pow(10,5)));
    int a[n];
    input(a,n);
    ticketcinema(a,n);
    return 0;
}