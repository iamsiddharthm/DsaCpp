#include<bits/stdc++.h>
using namespace std;
void hashingAlpha(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch 
        cout<<hash[c-'a']<<endl;
    }


}

void Maphashing(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    int q;
    cout<<"enter the value of q";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number :"<<endl;
        cin>>number;

        cout<<mpp[number]<<endl;
    }
}

int main(){
    /*int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter elemnt "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }



    cout<<"enter q:"<<endl;
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        cout<<hash[number]<<endl;
    }
        */

    // hashingAlpha();
    Maphashing();
}




