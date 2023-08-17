#include<iostream>

using namespace std;

int main(){
    int arr[8]={4,7,3,2,5,8,6,9};
    int count = 8;

    int counter = 0;

    for(int i = 0; i<count; i++){
        if((arr[i] % 2) == 0){
            counter++;
        }
    }

    cout<<"Count of even number in array is: "<<counter<< endl;


    return 0;
}