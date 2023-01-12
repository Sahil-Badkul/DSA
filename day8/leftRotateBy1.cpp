#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &arr){
    int n = arr.size();
    int a = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = a;
}

int main()
{
    vector<int> arr = {23, 4, 5, 6, 7};
    for(auto &ele : arr) cout<<ele<<" ";
    cout<<endl;
    leftRotate(arr);
    for(auto &ele : arr) cout<<ele<<" ";
    return 0;
}