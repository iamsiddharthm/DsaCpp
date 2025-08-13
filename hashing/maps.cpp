#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre compute 
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    cout<<"enter the value of q"<<endl;
    int q;
    cin>>q;

    while(q--){
        int num;
        cout<<"enter the number "<<endl;
        cin>>num;
        cout<<"occurance ="<<mpp[num]<<endl;
    }


    return 0;
}