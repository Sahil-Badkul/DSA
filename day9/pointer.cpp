// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    // data_type *pointer_name = &varibale 
    int *ptr = &num; // pointer stores address of variable 
    // int **ptr2 = &ptr;
    cout<<"value : "<< num <<endl;
    cout<<"addres : "<< &num << endl;
    cout<<"value using pointer : "  << *ptr <<endl;
    cout<<"address using pointer : " << ptr <<endl;
    // cout<<"value using pointer 2 : "  << **ptr2 <<endl;
    // cout<<"address using pointer 2: " << ptr2 <<endl;  

    *ptr = 7;
    cout<<num<<endl;     
    return 0;
}

/*
linked list
Graph 
Tree 

Dynamicaly 
*/