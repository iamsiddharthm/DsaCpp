//Encapsulation

//The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
//If you want others to read or modify the value of a private member, you can provide public get and set methods.

//to set we make a setter function and takes sthe value 
// to display or retrieve we make a getter function and return the value 
//we set the getter and setter function as public 
#include<iostream>
using namespace std;

class Employee{
    int salary ;

    public:
    void setSalary(int s){
        salary=s;
    }

    int getSalary(){
        return salary;
    }
};

int main(){
    Employee E1;

    E1.setSalary(4000000);

    cout<<"E1 salary is "<<E1.getSalary();
    return 0;
}


/*
Why Encapsulation?
1..It is considered good practice to declare your class attributes as private (as often as you can).
Encapsulation ensures better control of your data, because you (or others) can change one part of
the code without affecting other parts
2..Increased security of data
*/