/*Class Methods
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

Inside class definition
Outside class definition*/

#include<iostream>
using namespace std;

//internal defination (inside the class)
// class dog{
//     public:
//     void bark(){
//         cout<<"woof"<<endl;
//     }
// };



//outside the class function


class dog{
    public:
    void bark();
};

void dog::bark(){
    cout<<"woof"<<endl;
}
int main(){



    dog husky;
    husky.bark();
    return 0;
}