//Problem Statement: Given an integer N and an array of 
//size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.





// brute force :-
/*
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,4,5};
    int n=5;
    for(int i=1;i<n+1;i++){
        
        int flag=0;
        
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
                
                
            }
        }
        if(flag==0){
            cout<<i;
        }


    }
    return 0;
}

*/


//better solution 
/*
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5};
    int n=5;
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;

    }

    for(int i=1;i<=n;i++){
        if(hash[i]==0)
        cout<<i;
    }
    return 0;
}
*/


//optimal sols 
  
#include<iostream>
using namespace std;
int main(){
    int n =5;
    int arr[n]={1,2,4,5};
    //sum of n natural no =n(n+1)/2
   int s2=0;
    int s1=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        s2+=arr[i];
    }
    //basically we are taking the sum of array and sum of the first  n natural number and take their difference
    cout<<"missing number is "<<s1-s2;
    return 0;
}