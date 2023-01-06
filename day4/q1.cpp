/*
you have to take input from user and return maximum value in that

i/p
n = 5
arr = 3 45 6 7 8

o/p
45
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter size "<<endl;
    int n;
    cin>>n;
    cout<<"enter values : "<<endl;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int maxi = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<"maximum value is : "<<maxi;
}