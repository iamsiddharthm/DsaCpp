#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }


//     //precompute 
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         //fecth
//         cout<<"yes:"<<hash[number]<<endl;

//     }
// }


//character hashing ;-

int main(){
    string s;
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char ch;
        cout<<"enter the char:\n";
        cin>>ch;
        cout<<"cout ="<<hash[ch-'a']<<endl;


    }
}
