#include<iostream>
using namespace std;
/*
    0 1 2 3 4
    1 2 3 4 5 
    2 3 3 4 5
*/
int main()
{
    int arr[3][5];
    // arr[1][0], arr[1][1], arr[1][2] ..... arr[1][n];
    cout<<"Enter values :"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        cout<<i<<" -> ";
        for(int j = 0; j < 5; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}