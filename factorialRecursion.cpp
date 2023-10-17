#include<iostream>
using namespace std;

int factorial(int n){
  if(n == 1){
    return 1;
  }

  int ans = n * factorial(n-1);
  return ans;
}

int main(){
  int n =0;

  cout<<"Enter number to find factorial: ";
  cin>>n;
  cout<<factorial(n)<<endl;

}