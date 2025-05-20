#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string company;
    int age;

    void IntroduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }

    Employee(string name, string comp, int a)
    {
        Name = name;
        company = comp;
        age = a;
    }
};

int main()
{   

    // Employee employee1 = Employee("saldina", "yt", 35);
    //we can also use like this 
    Employee employee1("Saldina", "YT", 35);
    employee1.IntroduceYourself();

    Employee employee2("John", "Amazon", 30);
    employee2.IntroduceYourself();

    return 0;
}
git remote add origin <link>
git push -u origin main