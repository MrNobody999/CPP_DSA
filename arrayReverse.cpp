#include<iostream>

using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int start = 0;
    int end = 4;

    
    while(start < end){
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;

        start++;
        end--;
    }

    for(int i=0; i < 5; i++){
        cout<<arr[i] << " ";
    }


    return 0;
}