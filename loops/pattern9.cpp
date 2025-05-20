#include<iostream>
using namespace std;


void printp(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int t,n;
    cout<<"enter the value of t"<<endl;
    cin>>t;

    for(int i=0;i<t;i++){
        cout<<"enter the value of n :"<<endl;
        cin>>n;
        printp(n);
    }
    return 0;
}