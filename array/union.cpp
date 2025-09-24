#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//brute :-
/*

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7,8};

    int n1=sizeof(arr1)/sizeof(arr1[1]);
    int n2=sizeof(arr2)/sizeof(arr2[1]);

    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n1;i++){
        st.insert(arr2[i]);
    }

    int x=st.size();
    int uni[x];
    int i=0;    
    for(auto it:st){
        uni[i]=it;
        i++;
    }

    for(int i=0;i<x;i++){
        cout<<uni[i]<<endl;
    }
    return 0;
}


*/

//optimal approach 
//2 pointer approach 
int main(){
vector<int> unionArr;
int i=0, j=0;

while(i<n1 && j<n2){
    if(a[i] <= b[j]){
        if(unionArr.empty() || unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }
    else {
        if(unionArr.empty() || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }
}

while(i<n1){
    if(unionArr.empty() || unionArr.back() != a[i]){
        unionArr.push_back(a[i]);
    }
    i++;
}

while(j<n2){
    if(unionArr.empty() || unionArr.back() != b[j]){
        unionArr.push_back(b[j]);
    }
    j++;
}
}