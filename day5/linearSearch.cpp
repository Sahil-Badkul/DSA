#include<iostream>
#include<vector>
using namespace std;
/*
N = 8
log2^3
3log2 - 3*1 = 3
linear - O(N)          - 8
binary - O(logN)       - 3
       - O(NlogN)      - 24
       - O(N^2)        - 64
Time complexity 
factor - compiler, cup, internet speed, bit
-- time taken to run a fuction? 

-- No. of time any instruction run 

*/
// array must be sort to perform binary search 
bool binary_search(vector<int> num, int key){
    // 2 7 9 58 89 99 191 399
    // key = 10
    // mid = 2
    // low = 3
    // high= 2
    int low = 0, high = num.size()-1;
    while(low < high){
        int mid = (low + high)/2;
        if(num[mid] == key){
            return true;
        }
        if(num[mid] > key){
            high = mid-1;
        }else{
            low = mid + 1;
        }
    }
    return false;
}
bool linear_search(vector<int> num, int key){
    int n = num.size();
    for(int i = 0; i < n; i++){
        if(num[i] == key){
            return true;
        }
    }
    return false;
}
int main()
{
    int n, key; 
    cout<<"Enter value of size : ";
    cin>>n;
    cout<<"Enter arr values : "<<endl;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<"Enter value of key : ";
    cin>>key;
    
    bool find = binary_search(arr, key);
    if(find == true){
        cout<<"Value present";
    }else{
        cout<<"Not present";
    }
    return 0;
}