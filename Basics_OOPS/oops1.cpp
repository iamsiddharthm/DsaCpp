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
            cout<<"This person is eating "<<endl;

        }

        void sleep(){
            cout<<"This person is sleeping"<<endl;
        }
};

int main(){
    Human human1;

    human1.name="Rick";
    human1.occupation="Coder";
    human1.age=19;

    cout<<human1.occupation;
    return 0;
}