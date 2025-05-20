#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
        int day;
        cin>>day;

        switch(day){
            case 1 :
                cout<<"monday";
                break;
            case 2 :
                cout<<"Tuesday";
                break;
            case 3 :
                cout<<"Wed";
                break;
            case 4 :
                cout<<"thur";
                break;
            case 5 :
                cout<<"friday";
                break;
            case 6 :
                cout<<"saturday";
                break;
            case 7 :
                cout<<"sunday";
                break;
            default :cout<<"invaild choice";
        }
    return 0;
}   