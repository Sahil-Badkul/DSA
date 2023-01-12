#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int> arr){
    int low = 0, high = arr.size()-1;
    while(low < high){
        if(arr[low] == arr[high]){
            low++;
            high--;
        }else{
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> arr = {1, 3, 5, 3, 1};
    bool flag = isPalindrome(arr);
    if(flag){
        cout<<"Palindrome";
    }else{
        cout<<"Not palindrome";
    }
    return 0;
}