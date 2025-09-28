#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {4,1,2,1,2};
    //ans 4
    map<int,int> mpp;
    int n=sizeof(arr)/sizeof(arr[1]);
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        if(it.second == 1){
            cout<<it.first;
        }
    }

    return 0;
}