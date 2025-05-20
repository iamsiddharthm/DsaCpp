#include<iostream>
using namespace std;

// void PrintName(string name){
//     cout<<"Hey "<<name<<endl;
// }
// int main(){
//     string name;
//     cin>>name;
//     PrintName(name);
//     return 0;
// }

int sum(int num1, int num2){
    return num1+num2;
}

int main(){
    int num1,num2,res;
    cout<<"Enter the numbers..";
    cin>>num1>>num2;
    res=sum(num1,num2);
    cout<<res;
}
