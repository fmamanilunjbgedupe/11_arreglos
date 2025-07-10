#include <iostream>
using namespace std;
int main(){
    int n,max,min,a[20];
    cout<<"ingrese n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"ingrese los elementos"<<endl;
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(int i=1;i<n;i++){
       if(a[i]>max){
        max=a[i];
       }
       if(a[i]<min){
        min=a[i];
       }
    }
    cout<<endl<<"El maximo valor ingresado es: "<<max<<endl;
    cout<<"El minimo valor ingresado es: "<<min;
    return 0;
}