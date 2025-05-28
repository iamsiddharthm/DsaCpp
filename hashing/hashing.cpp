#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter elemnt "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }



    cout<<"enter q:"<<endl;
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        cout<<hash[number]<<endl;
    }
}