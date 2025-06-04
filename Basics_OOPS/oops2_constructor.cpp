#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        double cgpa;

    Student(string name,int age,double cgpa){
        this->name=name;
        this->age=age;
        this->cgpa=cgpa;


    /*Student(string x,int y,double z){
        name=x;
        age=y;
        cgpa=z;*/
    }
};

int main(){


    Student student1("spongeBob",25,3.2);

    Student student2("patrik",40,1.5);
    cout<<student1.name<<" "<<student1.age<<" "<<student1.cgpa<<endl;
    return 0;
}