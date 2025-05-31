#include<bits/stdc++.h>
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
        n=n/10;
    }
    cout<<arm<<endl;

}
void NumOfdiv(){
    //print all division
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    vector<int>ls;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if(n/i!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls) cout<<it<<" ";
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
void gcd2(){
    int p,q;
    cout<<"Enter value of p"<<endl;
    cin>>p;

    cout<<"Enter value of q"<<endl;
    cin>>q;

    int min=0;
    if(p<q){
        min=p;
    }
    else min=q;
    int gcd=0;
    for(int i=1;i<=min;i++){
        if(p%i==0 && q%i==0 ){
            gcd=i;
        }
    }
    cout<<gcd;
}


void eucliGCD(){
    //gcd(n1,n2)=gcd(n1-n2,n2)
    
}


void checkPrime(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    int count=0;
    for(int i=1;i*i<=n;i++){   //i*i bcs its sqrt of n
        if(n%i==0){
            count++;
            if((n/i)!=i) count++;
        }

    }
    if(count==2) cout<<"true";
    else cout<<"false";

}


int main(){
    // digit();
    // countDigit();
    // reverseNum();
    // palidrome();
    // armstrong();
    gcd2();
    // NumOfdiv();
    // checkPrime();
    return 0; 
}