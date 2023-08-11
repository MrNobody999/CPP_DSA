#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int key = 0;
    bool flag = 0;

    cout<<"Enter element to search"<<endl;
    cin>>key;

    for(int i=0; i<size; i++){
        if(arr[i] == key){
            //found
            flag = 1;
        }
    }

    if(flag)
        cout<< "Present" <<endl;
    else
        cout<< "Not present" <<endl;

    return 0;
}