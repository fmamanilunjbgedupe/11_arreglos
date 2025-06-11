#include<iostream>
using namespace std;
int main(){
    int n,s,prom,c[20];
    cout<<"ingrese n"<<endl;
    cin>>n;
    s=0;
    for(int i=0;i<n;i++){
        cout<<"ingrese los datos"<<endl;
        cin>>c[i];
        s=s+c[i];
    }
    prom=s/n;
    for(int i=0;i<n;i++){
        if(c[i]>prom){
            cout<<"los numeros mayores al promedio son"<<endl;
            cout<<c[i]<<", ";
        }
    }
}