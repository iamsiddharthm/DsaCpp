#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}

void bubble_sort(int arr[],int n){
    //bubble sort :push the max element to the last 
    for(int i=n-1;i>0;i--){
        int didSwap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didSwap=1;
            }
        }
        if(didSwap=1){
            break;
        }

    }
}

void insertion_sort(int arr[],int n){
    //insertion sort : take an eleement and place it in correct order
    
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}