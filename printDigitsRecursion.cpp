#include<iostream>
#include<vector>
using namespace std;

void printDigits(int no){
  
  //Base case
  if(no == 0){
   return; 
  }

 //Processing
  int iDigit = no % 10;
  
  no = no / 10;
  
//RR -> Recursive relation or Recursive call
 printDigits(no);

 cout<<iDigit<<endl;  
}


int main(){
  int number = 4251;
  
  printDigits(number);
 
  return 0;

}


