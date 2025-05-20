#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"The out put is ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }   
    return 0;
}

// imp note array always pass by reference(asli maal) and not by value(nakli maal)