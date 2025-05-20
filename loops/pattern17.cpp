#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        //start
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        //space
        for(int j=0;j<2*i;j++ ){
            cout<<" ";
        }
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



void print2(int n){
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        //space
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
int main(){
    int t,n;
    cout<<"Enter t :"<<endl;
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"enter value of n :"<<endl;
        cin>>n;
        print1(n);
        print2(n);

    }
    return 0;   
}