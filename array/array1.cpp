// //code to find second largest element without sorting 
// #include<iostream>
// using namespace std;
// void bubble_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int n=5;
//     int arr[n]={5,10,9,10,2};
//     bubble_sort(arr,n);
//     int lar=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>lar) lar=arr[i];
//     }


//     for(int i=n-1;i>=0;i--){
//         if(arr[i]<lar){
//             cout<<"second largest number is "<<arr[i]<<endl;
//             break;
//         }
//         else cout<<-1<<endl;
//     }


//     return 0;
// }


//optimal approach;-

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>&a,int n){
    int largest=a[0];
    int slargest=-1; //we  intilize it with slargest=INT_MIN  if numbers are negatives 
    for(int i=0;i<n;i++){
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
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = secondLargest(arr, n);

    if (result == INT_MIN) {
        cout << "No second largest element exists (all elements equal)" << endl;
    } else {
        cout << "Second largest element: " << result << endl;
    }

    return 0;
}
