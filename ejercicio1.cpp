#include <iostream>
using namespace std;
int main(){
    int n,max,a[20];
    cout<<"ingrese n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"ingrese los elementos"<<endl;
        cin>>a[i];
    }
    max=a[0];
    for(int i=1;i<n;i++){
       if(a[i]>max){
        max=a[i];
       }
    }
    cout<<max;
    return 0;
}