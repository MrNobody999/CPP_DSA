#include<iostream>
#include<vector>
using namespace std;

vector<int> searchElement(int *arr, int size, int index, int target){

  vector<int> ans;
  
  //Base case
  if(index >= size){
    return ans;
  }

  //Processing
  if(arr[index] == target){
    ans.push_back(index);
  }
  
  //RR -> Recursive relation or Recursive call
  vector<int> ans2 = searchElement(arr, size, index+1, target);

  ans.insert(ans.end(), ans2.begin(), ans2.end());
  return ans;
}


int main(){
  int arr[] ={11,20,11,20,11};
  int size = 5;
  int index = 0;
  int target = 20;
 
  vector<int> ans = searchElement(arr, size, index, target);
  for(int num: ans){
    cout<<num<<" ";
  }

  
  return 0;

}
