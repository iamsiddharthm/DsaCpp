/*
In C++, you can have more than one constructor in the same class. This is called constructor overloading.
Each constructor must have a different number or type of parameters, so the compiler knows which one to use when you create an object.
*/

#include<iostream>
using namespace std;

class car{
    public:
    
    string brand;
    string model;
    car(){
        brand="unknown";
        model="unknown";
    }
    car(string x,string y){
        brand =x;
        model=y;
    }
};
int main(){
    car car1;
    car car2("Tata","tiago");
    car car3("Ford","mustang");
    
    cout<<car1.brand<<" "<<car1.model<<endl;
    cout<<car2.brand<<" "<<car2.model<<endl;
    cout<<car3.brand<<" "<<car3.model;
    return 0;
}