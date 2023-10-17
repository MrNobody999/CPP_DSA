#include<iostream>
#include<vector>
using namespace std;

void elementDouble(int *arr, int size, int index){
  
  //Base case
  if(index >= size){
    return;
  }

  //Processing
  arr[index] = arr[index] * 2;
  
  //RR -> Recursive relation or Recursive call
  elementDouble(arr, size, index+1);
}


int main(){
  int arr[] ={11,20,31,40,51};
  int size = 5;
  int index = 0;
 
  
  elementDouble(arr, size, index);

  for(int i=0; i<size; i++){
    cout<< arr[i] <<" ";
  }

  
  return 0;

}
