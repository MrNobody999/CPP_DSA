#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,4,2,3,5,9,7,8,6,8};
    int size = 10;
    int start = 0;
    int end = size - 1;
    int temp = 0;

    while(start<=end){
        temp = start;
        start = end;
        end = temp;
        
        start++;
        end--;    
   }
   for(int i=0; i<size; i++){
    cout << arr[i] << " ";
   }

    return 0;
}