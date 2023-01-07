#include <bits/stdc++.h>
using namespace std;
/*
1. add, multiple --> array modify
2. condition on a given value
    print count of even number
    print count of odd number.
    
    0 1 2 3 4
    1 2 3 4 5 
    2 3 3 4 5

    3*5

*/
int main() {
    // string name;
    // cout<<"Enter your nam : ";
    // getline(cin, name);
    // cout<<name<<endl;
    cout<<"Enter size : "<<endl;
    int n; 
    cin>>n;
    vector<int> arr(n);
    // input
    cout<<"Enter values : "<<endl;
    for(int i = 0; i < n; i++) cin>>arr[i];
    // output
    int even = 0;
    int odd = 0;
    int divide_index = 0;
    for(int i = 0; i < arr.size(); i++){
        //arr[i] = arr[i] * 5;        // arr[i] + 4;        5 % 2 = 1
        if(arr[i] % 2 == 0){
            odd += 1;
        }else {
            even += 1;
        }
        if(arr[i] % (i+1) == 0){
            divide_index++;
        }
    }
    // cout<<even<<" "<<odd;
    cout<<"Even count is : "<<even<<endl;
    cout<<"Odd count is : "<<odd<<endl;
    cout<<"element divede by its index count are : "<<divide_index;
}