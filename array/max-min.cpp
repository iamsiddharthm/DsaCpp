//code to find max number in an array 

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }

    cout<<"Minimum ="<<min<<endl;
    cout<<"max="<<max<<endl;
  
    return 0;
}