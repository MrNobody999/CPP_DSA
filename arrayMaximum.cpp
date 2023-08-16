#include<iostream>
using namespace std;

int main(){

    int arr[9]={2,4,7,8,6,3,5,9,10};
    int count = 9;
    int maxi = INT_MIN;

    for(int i=0; i<count; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    cout<<"Maximum element is "<<maxi << endl;


    return 0;
}

