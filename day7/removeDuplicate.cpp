// Give a sorted array we need to remove duplicate
// 1 2 2 3 4 4 4 4 4 6 6 7 8 
// remove duplicate
// 1 2 3 4 6 7 8
// size 7

// Do you understand problem

// Approach ? 
#include<bits/stdc++.h>
using namespace std;

// void removeDuplicate(vector<int> &arr){
//     // 1 2 2 3 4 4 4 4 4 6 6 7 8 
//     int n = arr.size();
//     vector<int> dummy(n);
//     int j = 0;
//     dummy[0] = arr[0];
//     for(int i = 1; i < n; i++){
//         if(dummy[j] != arr[i]){
//             j += 1;
//             dummy[j] = arr[i];
//         }
//     }
//     arr = dummy;
// }
// Time complexity : O(n)
// Space complexity : O(n)
void removeDuplicate(vector<int> &arr){
    // 1 2 2 3 4 4 4 4 4 6 6 7 8 
    int n = arr.size();
    int j = 0;
    for(int i = 1; i < n; i++){
        if(arr[j] != arr[i]){
            j += 1;
            arr[j] = arr[i];
        }
    }
    cout<<(j+1);
}



void print(vector<int> &arr){
    for(auto &ele : arr) cout<<ele<<" ";
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<"Array containing duplicate"<<endl;
    print(arr);
    cout<<endl;
    removeDuplicate(arr);
    cout<<"after removing duplicate"<<endl;
    print(arr);
    return 0;
}