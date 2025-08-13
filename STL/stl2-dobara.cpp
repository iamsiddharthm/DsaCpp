//stl=standard templete library
#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include <list>
#include<deque>
using namespace std;
/*
int main(){
    vector<int> vec={1,2};
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.pop_back();
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<"\n";

    cout<<"val at index 2 is "<<vec[2]<<" or "<<vec.at(2)<<endl;
    cout<<"vector at front"<<vec.front()<<" vector at back "<<vec.back()<<endl;
    return 0;

    // vector<int>vec(3,10);
    // for(int val:vec){
    //     cout<<val<<" ";
    // }

    vector<int>vec;
      
    vec={1,2,3,4};
    vec.push_back(3);
    vec.emplace_back(5);  
    // vec.erase(vec.begin());
    //erase can change the size of the vector but the capacity remain the same
    //vec.erase(start,end)    // [start,end)
    // vec.erase(vec.begin()+1,vec.begin()+3);
    vec.insert(vec.begin()+2,100);
    for(int val:vec){
        cout<<val<<" ";
    }
    
    
    cout<<endl;
    cout<<vec[3]<<endl;
    cout<<vec.capacity();



}
*/

/*
//push_back is almmost do same thing as emplace_back omly slight diff is there
int main(){
    //emplace_front is also there in list
    list<int> l={1,2,3};
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_front(2);
    l.push_front(99);
    for(int val:l){
        cout<<val<<" ";
    }
    return 0;
}
*/
//deque and dequeue are not same 
//deque is double ended queue
// int  main(){
//     deque<int> dq={1,2,3,4,5};
//     for(int i:dq){
//         cout<<i<<" ";
//     }
//     return 0;
// }
/*
int main(){
   pair<int,int>p={1,2};
   cout<<"first value ="<<p.first<<endl;
   cout<<"second value="<<p.second<<endl ;

    pair<string,int>s={"sid",95};
    cout<<s.first<<" "<<s.second;

    pair<int,pair<int,int>>np={1,{2,4}};
    cout<<np.first<<endl;
    cout<<np.second.second<<endl;

    vector<pair<int,int>>vec={{1,2},{3,4}};
    vec.push_back({6,7});//=>insert 
    vec.emplace_back(4,5);//=>in place object create
    
    
    // for(pair<int,int> p:vec){
    //     cout<<p.first<< "and" << p.second <<endl;
    // }
    
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
*/



//non sequential ds;-

//stack=last in first out 
int main(){
    stack<int>s;    
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.push(7);
    cout<<s.top()<<endl; 
    

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();

    }
    cout<<endl;
    
    return 0;

}