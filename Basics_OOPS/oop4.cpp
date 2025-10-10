/*
A constructor is a special method that is automatically called when an object of a class is created.
To create a constructor, use the same name as the class, followed by parentheses ():
*/

#include<iostream>
using namespace std;
class myClass{
    public:
    myClass(){ //constructor 
        cout<<"Hello World"<<endl;
    }
};
int main(){ 
    myClass myObj;


    return 0;
}