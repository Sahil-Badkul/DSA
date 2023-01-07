// 1. print largest element
// 2. print second largest element
#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> arr){
    // return largest element
    // arr -->  8 9 23 99 40 101 3 78 
    int largest = 0;  // assume 1st ele is largest or assume -ve ele is largest
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > arr[largest]){      // n time
            largest = i;   // 101
        }
    }
    return largest;
}
int secondLargest(vector<int> arr){
    int largest_index = largestElement(arr);
    // 10 10 10 10 
    int second = -1;
    for(int i = 0; i < arr.size(); i++){    // n time
        if(arr[i] != arr[largest_index]){
            if(second == -1 || arr[i] > arr[second]){
                second = i;
            }
        }
    }
    return second;
}
int secondLargestElement(vector<int> arr){
    // 12 11 98 77 4
    int largest_index = 0;
    int second_index = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > arr[largest_index]){    // 98
            second_index = largest_index;   // 12
            largest_index = i;              // 98 
        }else if(arr[i] != arr[largest_index] && second_index == -1 || arr[i] > arr[second_index]){ // 12
            second_index = i;
        }
    }
    return second_index;
} // O(n)
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<secondLargest(arr);   // 2N
    return 0;
}