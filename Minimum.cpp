#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,4,2,3,5,9,7,8,6,0};
    int size = 10;
    int mini = INT_MAX;

    
    for(int i=0; i<size; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout<<"Minimum number is " <<mini <<endl;

    return 0;
}