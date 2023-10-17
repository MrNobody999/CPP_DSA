#include<iostream>
#include<limits.h>>
using namespace std;

void maxiElement(int *arr, int size, int index, int &maxi){
  
  //Base case
  if(index >= size){
    return;
  }

  //Processing
  maxi = max(maxi, arr[index]);
 
  //RR -> Recursive relation or Recursive call
  maxiElement(arr, size, index+1, maxi);
}


int main(){
  int arr[] ={10,20,30,40,50};
  int size = 5;
  int index = 0;
  int maxi = INT_MIN;

  maxiElement(arr, size, index, maxi);
  
  cout<<"Maximum number is: "<<maxi<<endl;

  
  return 0;

}
