#include<iostream>
#include<vector>
using namespace std;

void doublearr(int arr[], int size, int index){
   if(index >= size){
      return;
   }
   arr[index] = arr[index] * 2;

  doublearr(arr, size, index+1);

}

int main(){
  int arr[] ={10,20,30,40,50};
  int size = 5;
  int index = 0;
  

  doublearr(arr, size, index);

  for(int i=0; i<5; i++){
  cout<<arr[i]<<" ";
}
  

  return 0;

}
