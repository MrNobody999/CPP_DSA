#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,4,2,3,5,9,7,8,6,8};
    int size = 10;
    int start = 0;
    int end = size - 1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;    
   }

   for(int i=0; i<size; i++){
    cout << arr[i] << " ";
   }
    return 0;
}