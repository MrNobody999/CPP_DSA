#include<iostream>
using namespace std;

int main(){

    int arr[2][2] ={{1,2}, {4,5}}; 
    int brr[2][2] ={{7,8}, {11,12}};
    int crr[2][2];
    int row = 2;
    int col = 2;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            crr[i][j]=arr[i][j] + brr[i][j];
        }
        cout<<endl;
    }

    
    cout<<"The matrix elements after adding both matrices: "<<endl;
    for(int i = 0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}