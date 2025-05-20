#include<iostream>
using namespace std;

void printl(int n){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cout<<"Enter the value of t"<<endl;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"enter the value of n"<<endl;
        cin>>n;
        printl(n);

    }
    return 0;


    
}

// *
// * *
// * * *
// * * * *
// * * * * *