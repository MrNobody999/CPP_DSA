#include<iostream>

using namespace std;

int main(){
    int arr[8]={1,4,3,2,7,8,6,9};
    int count = 8;

    int pairSum = 0;
    int counter = 0;

    for(int i = 0; i<count; i++){
        for(int j = i+1; j < count; j++){
            if(arr[i]+arr[j] == 5){
                cout<<"Sum 5 is ceated by this elements : "<<arr[i]<< "," <<arr[j]<<endl;
                counter++;
            }
          }

       
    }
    cout<<"Count of pairs having sum 5 is : "<<counter<< endl;
  


    return 0;
}