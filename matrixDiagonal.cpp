#include<iostream>

using namespace std;

int main(){
    int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int row = 3, col =3;
    cout<<"The principal diagonal elements are: "<<endl;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i == j){
                cout<<arr[i][j]<< " ";
            }
        }
    }

    cout<<"\nThe principal diagonal elements are: "<<endl;
    int k = 2;

    for(int i=0; i<row; i++){
        cout<<arr[i][k]<<" ";
        k--;    }

    return 0;
}