#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = i-1; j >= 0; j--){
            if(arr[j] > arr[i]) {
                return false;
            }
        }
    }
    return true;
}
// Time complexity : O(n^2) 

bool isSorted2(vector<int> &arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
            return false;
        }
    }
    return true;
}
// Time complexity : O(n)
// 7 9 3 
 
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    bool result = isSorted(arr);
    if(result){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }
    return 0;
}