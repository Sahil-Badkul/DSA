#include<bits/stdc++.h>

using namespace std;
int main()
{

    // We can not fill element after fill it completely
    // memory wasteg 
    
    // string student_name[50];


    //ar1[0]; // --> we can access ary by [] sq bracket
    // --> array indexing from 0
    
    // travesing 
    // cout<<"Array traversal through for loop "<<endl;
    // for(int i = 0; i < 5; i++){
    //     cout<<ar1[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"Array traversal through for each loop "<<endl;
    // for(auto x : ar1){  // auto is a keyword which automaticaly detected data type of container
    //     cout<<x<<" ";
    // }
    // return 0;
    // int, char, string, float
    // vector<data_type> variable_name;
    // vector<data_type> variable_name(size);
    // vector<data_type> variable_name(size, default_value);


    // vector is a container which store value, which is same as array
    // vector<int> arr(5);
    vector<int> arr(5, -1);
    vector<string> student;
    vector<float> cgpa;
    arr[0] = 1;
    arr[1] = 2;
    // You have enter some value in last of arry

    /*
        push_back()
        pop_back()
        size()
        clear()
    */
    arr.push_back(45);
    arr.push_back(6455);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(85);

    arr.pop_back();

    sort(arr.begin(), arr.end());

    // .size();
    // endl --> is used to move cursor into next line
    // escape \n 
    cout<<"Size of array : "<<arr.size()<<endl;
    // Aptitute, reasonig , english, technical(c++, java, dbms, sql)
    // coding question
    for(auto y : arr){
        cout<<y<<" ";
    }

    // return sum of arry, product of arry, sum of even index

    vector<string> fruits;
    fruits.push_back("Apple");
    fruits.push_back("Banana");
    fruits.push_back("Mango");

    fruits.pop_back();

    /*
    1. no need to worry about size 
    2. insert or delete ele without hesitation
    3. we can make vector of any datatype
    4. it provide inbuild function 
    */

    int n = fruits.size();


}