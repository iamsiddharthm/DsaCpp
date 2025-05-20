#include<iostream>
using namespace std;

void printl(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;

    }

}

void print2(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
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
        print2(n);
        printl(n);
        

    }
    return 0;
}