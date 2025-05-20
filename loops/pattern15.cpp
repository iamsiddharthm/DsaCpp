#include<iostream>
using namespace std;

void printp(int n){

    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        ch+=1;
        cout<<endl;
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

    printp(n);
}
    return 0;
}