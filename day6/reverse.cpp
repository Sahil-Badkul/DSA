#include<bits/stdc++.h>
using namespace std;
// Reverse an array
// 23 45 78 25 30
// 30 _ _ _ 23
// _ 25 _ 45 _ 
// _ _ 78 _ _ 
// 30 25 78 45 23 
// 0 _ _ _ 4
// _ 1 _ 3 _ 
// _ _ 2 _ _ 
// 23 45 78 25 30

void reverse(vector<int> &arr){
    int low = 0, high = arr.size()-1;
    while(low < high){
        swap(arr[high], arr[low]);
        low += 1;
        high -= 1;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    
    // inbuild function to reverse vector
    // reverse(arr.begin(), arr.end());

    // user defined
    reverse(arr);
    for(int i = 0; i < n; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}