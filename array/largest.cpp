#include<iostream>
using namespace std;
int main(){
    //largest number in the array 
    int arr[10]={1,2,3,7,4,5,6};
    int max=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"largest element is "<<max<<endl;
    return 0;
}



