//left rotate array by one place 
#include<iostream>
using namespace std;
//[1,2,3,4,5]--->[2,3,4,5,1
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int first=arr[0];
    for(int i=0;i<n;i++){
        
        if(i==n-1) arr[i]=first;

        else
        arr[i]=arr[i+1];
    }


    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}