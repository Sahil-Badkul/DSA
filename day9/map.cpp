#include<bits/stdc++.h>
// #include<map>
using namespace std;
int main()
{
    int arr[] = {10, 10, 10, 23, 23, 4, 4, 5, 3};    
    int n = sizeof(arr)/sizeof(arr[0]);
    // Theory
    // map is a container 
    // which is used to store key-value pair
    // syntax
    // map<data_type1, data_type2> name;
    // key should alway be unique
    // map<int, int> freq;         // map to store freq of elements. 
    map<string, int> names;      // map to store name and age of student.
    // how to access and insert value  
    names["sahil"] = 98;
    names["mohit"] = 90;
    names["anand"] = 3;
    // cout<<names["sahil"]<<endl;
    // updated value
    names["sahil"] = 12;
    // cout<<names["sahil"]<<endl;
    // map traverse
    // map always stores key in sorted order
    // for(auto [key, value] : names){
    //     cout<<key<<" "<<value<<endl;
    // }


    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++){
        freq[arr[i]] += 1;
    }

    for(auto it : freq){
        cout<<"Freq of "<< it.first <<" is "<< it.second<<endl;;
    }

    // 1. We can make map of any data type 
    // 2. map always stores key in sorted order.
    // 3. Time complexity : O(1)
    // 4. We are using map to store key-value 

    // .size();

    return 0;
}