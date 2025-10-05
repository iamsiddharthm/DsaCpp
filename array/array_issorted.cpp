#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int n,int a[]){
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){

        
    }
    else return false;}
    return true;
}

//first element -to-> second element are u greater or equal to 2nd elemnt if yes do nothing if no return false
int main(){
    int arr[6]={1,2,3,4,5,6};
    if(is_sorted(6,arr)){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    };
    return 0;
}