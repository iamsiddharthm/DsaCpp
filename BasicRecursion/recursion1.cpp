#include<iostream>
using namespace std;
int cnt=0;
void name5(){
    
    if(cnt <5) cout<<"siddharth"<<endl;

    cnt++;  
    name5();
}


void printname(int i,int n){
    if(i>n){
        return;
    }
    else{
        cout<<"sid"<<" ";
    }
    printname(i+1,n);
}


int main(){
    // name5();
    int n;
    cout<<"enter n value"<<endl;
    cin>>n;
    printname(1,n);
    return 0;
}