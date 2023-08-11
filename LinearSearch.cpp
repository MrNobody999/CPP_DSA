#include<iostream>
using namespace std;

bool find(int arr[], int size, int key){
    //Linear search
    for(int i=0; i<size; i++){
        if(arr[i] == key)
            return true;
        }

    //not present 
    return false;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int key = 0;

    cout<<"Enter element to search"<<endl;
    cin>>key;

    if(find(arr, size, key )){
        cout<<"Found" <<endl;;
    }
    else{
        cout<<"Not found" <<endl;
    }
}

