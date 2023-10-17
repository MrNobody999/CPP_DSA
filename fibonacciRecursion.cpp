#include<iostream>
using namespace std;

int fib(int n){
  if(n == 0){
    return 0;
  }
  if(n == 1){
    return 1;
  }

  int ans = fib(n-1)+fib(n-2);
  return ans;  
}

int main(){
  int n =0;

  cout<<"Enter number to print n'th tern of fibonacci series: ";
  cin>>n;
  cout<<fib(n)<<endl;

  return 0;

}
