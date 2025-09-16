// C++ program to find second largest element in an array
// using Sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function to find the second largest element
// #include<iostream>
// using namespace std;
// #include<bits/stdc++.h>

// int slargestElement(vector<int> &arr,int n){
//     //better approach
//     int largest = arr[0];
//     for(int i=0;i<n;i++){
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
//     }
//     int slargest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>slargest && arr[i]!=largest){
//             slargest=arr[i];
//         }
//     }
//   return slargest;
// }





//optimal approach

int slargestElement(vector<int> &a ,int n){
    int largest=a[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest=a[i];
        }
    }
    return slargest;
}
int main() {
    vector<int> arr = { 12, 35, 1, 10, 34, 1 };
    cout<<slargestElement(arr,6);
    return 0;
}