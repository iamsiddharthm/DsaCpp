#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;


    pair<int,pair<int,int>>c={1,{3,4}};
    cout<<c.first<<" "<<c.second.second<<" "<<c.second.first;

    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
}

void explainVector() {
    /*vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> b;
    b.push_back({1, 2});
    b.emplace_back(1, 2);

    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v2(5);      // {0, 0, 0, 0, 0}
    vector<int> v3(5, 20);  // {20, 20, 20, 20, 20}
    vector<int> v4(v1);     // copy of v1

    cout << endl;
    cout << "op-" << endl;
    cout << v3[1] << endl;

    // Iterator example
    vector<int>::iterator it = v.begin();
    it++; // points to v[1], which is 2

    if (it != v.end()) {
        cout << *(it) << " ";
    }
    cout<<"\n";
    // safer iteration using loop
    for(vector<int>::iterator it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<endl<<"Method 2:--"<<endl;
    for(auto it=v.begin();it != v.end();it++){
        cout<<*(it)<<" ";
    }

    cout<<"Method 3 ;-" <<endl;
    for(auto it:v1){
        cout<<it<<" ";
    }


    cout<<endl;
    cout<<"deletion"<<endl;
    vector<int> numbers = {10, 20, 30, 40, 50,60,70,80};
    numbers.erase(numbers.begin()+1);
    for(auto it:numbers){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"after .erase(start,end)"<<endl;
    numbers.erase(numbers.begin()+1,numbers.begin()+3);
    numbers.erase(numbers.begin()+1);
    for(auto it:numbers){
        cout<<it<<" ";
    }*/
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    std::queue<int> q;
    for(int i=0;i<n;i++){
        q.push(i);
    }


    cout<<std::endl;
    q.pop(); // Removes the front element (1)
    q.pop();
    q.pop();
    // Display the current front
    cout << "Front element: " << q.front() << std::endl;
}

int main(){
    explainPair();
    explainVector();
    return 0;
}