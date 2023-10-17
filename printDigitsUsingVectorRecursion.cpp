#include<iostream>
#include<vector>
using namespace std;

void printDigits(int no, vector<int> &ans){
  
  //Base case
  if(no == 0){
   return; 
  }

 //Processing
  int iDigit = no % 10;
  
  no = no / 10;
  
//RR -> Recursive relation or Recursive call
  printDigits(no, ans);

  ans.push_back(iDigit);
}


int main(){
  int number = 4251;
  vector<int> ans;
  
  printDigits(number, ans);

  for(int num: ans){
    cout<< num <<endl;
  }
  
  return 0;

}
