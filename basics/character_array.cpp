#include<iostream>
using namespace std;
#include <cstring>

int main(){
    /*char str[]="Hello";  
    cout<<str<<endl;
    cout << strlen(str) << endl;
    cout<<str[2]<<"\n";
    return 0;
    */

    //cin.getline(str,len,delim?)
    //eg cin.getline(str,100,'$');
    char str[12];
    cout<<"enter the char array/string"<<endl;
    cin.getline(str,100);

    cout<<"output is :"<<str<<endl;

    int len=0;
    for(char ch : str){
        cout<<ch<<" ";
        len+=1;
    }
    cout<<endl<<len<<endl;
}