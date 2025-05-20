#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int age;
    // cout<<"Enter the age: "<<std::endl;
    // cin>> age;

    // if(age>18){
    //     cout <<"Your an adult" <<"\n";
    // }
    // else{
    //     cout<<"You are underage"<<"\n";
    // }


    int marks;
    cout<<"Enter marks"<<"\n";
    cin>>marks;
    if(marks>=80 && marks<=100){
        cout<<"A"<<"\n";
    }
    else if(marks<80 && marks>=60){
        cout<<"B"<<std::endl;

    }
    else if(marks<60 && marks>=50){
        cout<<"c"<<"\n";
    }

    else if(marks<50 && marks>=45){
        cout<<"D"<<"\n";   
    }
    else if(marks<45 && marks>=25){
        cout<<"E"<<"\n";
    }

    else{
        cout<<"F"<<"\n";
    }

    return 0;
}