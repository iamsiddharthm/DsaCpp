#include<iostream>
using namespace std;
class Myclass{
    public:
    int myNum;
    string myString;
};
int main(){
    //object 1
    Myclass myObj1;
    myObj1.myNum=19;
    myObj1.myString="sid";

    //object 2
    Myclass myObj2;
    myObj2.myNum=22;
    myObj2.myString="saul";


    cout<<"name :"<<myObj1.myString<<"  age: "<<myObj1.myNum<<endl;
    cout<<"name :"<<myObj2.myString<<"  age: "<<myObj2.myNum;


    return 0;
}