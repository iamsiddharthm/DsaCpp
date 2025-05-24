#include<iostream>
using namespace std;
int cnt=0;
void name5(){
    
    if(cnt <5) cout<<"siddharth"<<endl;

    cnt++;
    name5();
}

int main(){
    name5();
    return 0;
}