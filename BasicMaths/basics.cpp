#include<iostream>
using namespace std;


void digit(){
    int n=7789;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        cout<<lastdigit<<endl;
    }
}

void countDigit(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int count=0;

    while(n>0){
        count+=1;
        n=n/10;
    }

    cout<<count<<endl;
    
}

void reverseNum(){
    int n=7789;
    int revNo=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;

        revNo=(revNo*10)+lastdigit;

    }
    cout<<revNo;
}

void palidrome(){
    //check if number is palidrome or not
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int revNo=0;
    int original=n;

    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        
        revNo=(revNo*10)+lastdigit;
    }
    
    if(revNo==original){
        cout<<true<<endl;

    }
    else
    cout<<false;
}

void armstrong(){
    int n=371;
    int arm=0;
    while(n>0){
        int lastdigit=n%10;
        arm+=lastdigit*lastdigit*lastdigit;
    }
    cout<<arm<<endl;

}

void gcd(){
    int p,q,r;
    cout<<"Enter value of p(p>q)"<<endl;
    cin>>p;

    cout<<"Enter value of q(p>q)"<<endl;
    cin>>q;


    while(q!=0){
        int r=p%q;
        p=q;
        q=r;

    }
    cout<<p;
}
int main(){
    // digit();
    // countDigit();
    // reverseNum();
    // palidrome();
    // armstrong();
    gcd();
    return 0; 
}