#include<iostream>
using namespace std;

void printReverse(int n){
  if(n == 0){
    return;
  }

  cout<<n<<" ";

  printReverse(n-1);
}

int main(){
  int n =0;

  cout<<"Enter number to print from n to 1: ";
  cin>>n;
  printReverse(n);

}
