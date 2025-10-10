/*Create a class called Book with the following attributes:

title (string)
author (string)
year (int)
Then create two objects of the class and print their attribute values.*/

#include<iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;
    int year;

};

int main(){
    
    //obj 1
    Book book1;
    book1.title="Matilda";
    book1.author="Roald Dahl";
    book1.year=1988;

    //obj 2
    Book book2;
    book2.title="The Giving Tree";
    book2.author="Shel Silverstein";
    book2.year=1964;

    cout<<book1.title<<" "<<book1.author<<book1.year<<endl;
    cout<<book2.title<<" "<<book2.author<<book2.year<<endl;
    

    return 0;
}