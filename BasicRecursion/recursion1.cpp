#include<iostream>
using namespace std;
int cnt=0;
void name5(){
    
    if(cnt <5) cout<<"siddharth"<<endl;

    cnt++;  
    name5();
}


void printname(int i,int n){
    if(i>n){
        return;
    }
    else{
        cout<<"sid"<<" ";
    }
    printname(i+1,n);
}


void printNo(int i,int n){
    if(i>n){
        return;
    }
    else cout<<i<<endl;

    printNo(i+1,n);

}

void printRevNo(int i,int n){
    //backtrack
    if(i<1){
        return;
    }
    else cout<<i<<endl;

    printRevNo(i-1,n);
}

void printBackNo(int i ,int n){
    if(i>n){
        return;
    }
    else cout<<n-i+1<<endl;

    printBackNo(i+1,n);

}
void BacktrackNo(int n,int i){
    if(n<i) return;

    else cout<<n-i;
     BacktrackNo(n,i+1);
}

int main(){
    // name5();
    int n;
    cout<<"enter n value"<<endl;
    cin>>n;
    // printname(1,n);
    // printNo(1,n);
    // printRevNo(n,n);
    printBackNo(1,n);
    return 0;
}

