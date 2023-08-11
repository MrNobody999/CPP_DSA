#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,4,2,3,5,9,7,8,6};
    int size = 9;
    int start = 0;
    int end = size - 1;

   while(true){
        if(start > end)
            break;

        if(start == end){
            cout<< arr[start] << endl;
        }
        else{
            cout<< arr[start]<< " ";
            cout<< arr[end]<< " ";
        }
            
        start++;
        end--;    
   }
    
    return 0;
}