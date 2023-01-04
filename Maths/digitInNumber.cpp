/*
    It's very intresting to find digit in a number.
    For this you only need to know about modulous opertor(%).
*/
#include<iostream>
using namespace std;
int countDigit(long long n){
    int count = 0;
    while(n > 0){
        n /= 10;
        count++;
    }
    return count;
}
bool isEven(int n){
    return (n % 2 == 0);
}
int main(){
    // long long mob = 9325648790;
    // // in correct mob. there are 10 digit
    // // count the digit in number
    // int count = countDigit(mob);
    // if(count == 10){
    //     cout<<"Right no.";
    // }else{
    //     cout<<"Wrong no.";

    cout<<"Enter number : ";
    int num;
    cin>>num;
    int count = countDigit(num);
    if(count % 2 == 0){
        cout<<"Even size";
    }else{
        cout<<"odd size";
    }
    // error
     // logical error
     // count digit in a number
     // check even odd
    //  lenght or size
    //  num = 79879798;

}