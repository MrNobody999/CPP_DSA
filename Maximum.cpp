#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,4,2,3,5,9,7,8,6,1};
    int size = 10;
    int maxi = INT_MIN;

    
    for(int i=0; i<size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<"Maximun number is " <<maxi <<endl;

    return 0;
}