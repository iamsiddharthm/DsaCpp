#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={1,1,0,1,1,1,0,1,1};
    int maxi=0;
    int cnt=0;
    int n=sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }

    return 0;
}