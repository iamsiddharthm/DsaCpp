#include<iostream>
using namespace std;

void printp(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count+=1;
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