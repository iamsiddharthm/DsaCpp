#include<iostream>
using namespace std;


void printp(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";

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