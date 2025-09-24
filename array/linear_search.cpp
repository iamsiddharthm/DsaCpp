#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the size of array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements into the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int tar;
    cout<<"Enter the target element"<<endl;
    cin>>tar;


    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==tar){
            cout<<tar<<" found at index "<<i<<endl;
            flag=1;
            break;
        }
    }
    

    if(flag==0){
        cout<<"element not found "<<endl;
    }
    return 0;
}