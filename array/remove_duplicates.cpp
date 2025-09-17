//remove duplicate from sorted array
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/* brute force 
nt removeduplicate(int arr[],int n){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }   

    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }

    for(int i=0;i<index;i++){
        cout<<arr[i]<<endl;
    }

}
*/

int removeduplicate(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;

        }

    }
    return (i+1);
}
int main(){
    int arr[9]={1,2,2,3,4,4,6,7,7};
    removeduplicate(arr,9);

    return 0;
}