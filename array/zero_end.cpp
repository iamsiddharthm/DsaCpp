#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
brute force ;-takes temp storage 


int zero_end(int arr[],int n){
    vector <int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int nz=temp.size();
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }


    for(int i=nz;i<n;i++){
        arr[i]=0;
    }


    cout<<"Array is :-\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    //itn  arr[]={1,2,0,3,0,0,4} --->{1,2,3,4,0,0,0}
    cout<<"Enter array size"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    zero_end(arr,n);
    return 0;
}

*/


