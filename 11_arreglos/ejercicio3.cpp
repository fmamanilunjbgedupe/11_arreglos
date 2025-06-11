#include<iostream>
using namespace std;
int main(){
    int n,c[20],aux;
    cout<<"ingrese los valores de n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n/2;i++){
        aux=c[i];
        c[i]=c[n-1-i];
        c[n-1-i]=aux;
    }
    for(int i=0;i<n;i++){
        cout<<c[i];
    }
    return 0;
}