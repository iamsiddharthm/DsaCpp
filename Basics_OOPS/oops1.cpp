#include<iostream>
using namespace std;

class Human{
    public:
        string name;
        string occupation;
        int age;


        void eat(){
            cout<<"This person is eating "<<endl;

        }

        void drink(){
            cout<<"This person is drinking "<<endl;

        }

        void sleep(){
            cout<<"This person is sleeping"<<endl;
        }
};


class Car{
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate(){
            cout<<"Your are speeding up"<<endl;
        }

        void brake(){
            cout<<"You stepped on the brakes"<<endl;
        }
};

int main(){
    Human human1;
    
    // human1.name="Rick";
    // human1.occupation="Coder";
    // human1.age=19;

    // cout<<human1.occupation;

    // cout<<endl;
    // human1.eat();
    // human1.sleep();
    // human1.drink();


    Car Car1;

    Car1.make="Ford";
    Car1.model="Mustang";
    Car1.year=2023;
    Car1.color="silver";


    cout<<Car1.make<<" "<<Car1.model<<" "<<Car1.year<<" "<<Car1.color <<endl;

    Car1.accelerate();
    Car1.brake();
    return 0;
}


//object=collection of attributes and methods

//method are function that a object can perform