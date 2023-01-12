#include<bits/stdc++.h>
using namespace std;

// pass by value
// pass by reference
void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
    cout<<"a and b value in function\n";
    cout<<a<<" "<<b<<endl;
}


int main()
{
    int a = 5;
    int b = 3;
    cout<<"Before swaping\n";
    cout<<a<<" "<<b<<endl;
    swap(a, b);
    cout<<"After swaping\n";
    cout<<a<<" "<<b<<endl;
    return 0;
}