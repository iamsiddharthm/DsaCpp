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

void sumRecursion(int i,int sum){

    if(i<1){
        cout<<sum;
        return;

    }

    else sumRecursion(i-1,sum+i);
}

int  sumNo1(int n){
    if(n==0) return 0;
    else return n+sumNo1(n-1);
}

int fact(int n){
    if(n==1) return 1;

    else{
        return n*fact(n-1);
    }

}



int main(){
    // name5();
    int n;
    cout<<"enter n value"<<endl;
    cin>>n;
    int sum=0;
    // printname(1,n);
    // printNo(1,n);
    // printRevNo(n,n);
    // printBackNo(1,n);
    // sumRecursion(n,sum);
    // sum2(n,sum);
    // cout<<sumNo1(n);
    cout << fact(n);
    return 0;
}

