#include<iostream>
using namespace std;

int powerOfTwo(int n){
  if(n == 0){
    return 1;
  }

  int ans = 2 * powerOfTwo(n-1);
  return ans;  
}

int main(){
  int n =0;

  cout<<"Enter number to print power of 2 upto n: ";
  cin>>n;
  cout<<powerOfTwo(n)<<endl;

  return 0;

}
