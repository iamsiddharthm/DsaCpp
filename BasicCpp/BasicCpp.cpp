#include<iostream>
using namespace std;

void String_cin(){
    string name;
    getline(cin,name);

    cout<<name;
}

void SIZEOF(){
    //sizeof()=> determine the size in byte of a:variable ,data type ,class,object etc
    string team;
    int gpa;
    double cgpa;
    getline(cin,team);
    cin>>gpa;
    cin>>cgpa;
    cout<<sizeof(team)<<" bytes"<<endl;
    cout<<sizeof(gpa)<<" bytes"<<endl;
    cout<<sizeof(cgpa)<<" bytes"<<endl;
}
int main(){
    SIZEOF();

    return 0;
}