#include<iostream>
using namespace std;

void printl(int n){
        char ch='A';
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            ch+=1;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        } 
    cout<<endl;
    ch='A';
    }
       
}


int main(){
int t;
cout<<"Enter the value of t"<<endl;
cin>>t;

for(int i=0;i<t;i++){
    int n;
    cout<<"Enter the value of  n"<<endl;
    cin>>n;

    printl(n);
}
    return 0;
}