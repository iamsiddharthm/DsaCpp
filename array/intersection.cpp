#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,2,3,3,4,5,6};
    int b[]={2,3,3,5,6,6,7,8};
    vector<int>intersection;
    int n1=sizeof(a)/sizeof(a[1]);
    int n2=sizeof(b)/sizeof(b[1]);
    int i=0;
    int j=0;
    while(i<n1 && j<n2){

        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        // if(a[i]==b[j]){
        else{
            intersection.push_back(a[i]);
            j++;
            i++;
        }
        

    }

    for(auto it:intersection){
        cout<<it <<" ";
    }
    return 0;
}