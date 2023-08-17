#include<iostream>
using namespace std;

int main(){

    int arr[9]={2,4,7,8,6,3,5,9,10};
    int count = 9;
    int mini = INT_MAX;

    for(int i=0; i<count; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }

    cout<<"Minimum element is "<<mini << endl;


    return 0;
}

