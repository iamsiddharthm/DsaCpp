#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[] = {4,1,2,1,2};
//     //ans 4
//     map<int,int> mpp;
//     int n=sizeof(arr)/sizeof(arr[1]);
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     for(auto it:mpp){
//         if(it.second == 1){
//             cout<<it.first;
//         }
//     }

//     return 0;
// }


//optimal way using XOR

#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={1,1,2,3,3,8,8};
    //xor logic :1^1^2^3^3^8^8 =0^2^0^0=0^2=2
    int XOR=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    cout<<XOR; 
    return 0;
}