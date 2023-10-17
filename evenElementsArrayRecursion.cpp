#include<iostream>
#include<vector>
using namespace std;

void EvenElement(int *arr, int size, int index, vector<int> &ans){
  
  //Base case
  if(index >= size){
    return;
  }

  //Processing
  if(arr[index] % 2 == 0){
    ans.push_back(arr[index]);
  }
  
  //RR -> Recursive relation or Recursive call
  EvenElement(arr, size, index+1, ans);
}


int main(){
  int arr[] ={11,20,31,40,51};
  int size = 5;
  int index = 0;
  vector<int> ans;
  
  EvenElement(arr, size, index, ans);

  for(int num: ans){
    cout<< num <<" ";
  }

  
  return 0;

}
