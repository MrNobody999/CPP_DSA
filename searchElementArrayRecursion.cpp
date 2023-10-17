#include<iostream>
using namespace std;


bool searchElement(int arr[], int size, int index, int target){
  
  if(index >= size){
    return false;
  }
  
  if(arr[index] == target){
    return true;
  }

   
  bool ans = searchElement(arr, size, index+1, target);

  
  return ans;
}

int main(){
  int arr[] ={10,20,30,40,50};
  int size = 5;
  int index = 0;
  int target = 50;
  
  bool ans = searchElement(arr, size, index, target);

  if(ans){
    cout<<"Element Found"<<endl;
  }
  else{
    cout<<"Element Not Found";
  }

  return 0;

}
