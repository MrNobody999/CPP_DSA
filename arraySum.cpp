#include<iostream>
using namespace std;

int arraySum(int* arr, int count){
    int sum = 0;
    for(int i=0; i<count; i++){
        sum = sum + arr[i]; 
    }
    return sum;
}   

int main(){

    int arr[5] ={4,1,7,5,10};
    int count = 5;

    int iSum = 0;
    iSum = arraySum(arr, count);
    
    cout<<"Sum of all elements is "<<iSum << endl;

    return 0;
}