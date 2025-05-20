#include<iostream>
using namespace std;
/*
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}*/

/*
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
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
        pattern3(n);

    }
    return 0;
}