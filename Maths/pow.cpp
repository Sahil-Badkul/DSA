/*
Implement power function  :- pow(x, n);
eg 
i/p : x = 2, n = 10
o/p : 1024

3*3 = 27
3*2 = 9
3*4 = 81
*/

#include<iostream>
using namespace std;
// int pow(int x, int n){
//     int ans = 1;
//     for(int i = 1; i <= n; i++){
//         ans = ans * x;
//     }
//     return ans;
//     // What is the Time complexity --- O(n) -- O(logN)
// }
int pow(int x, int n){
    int ans = 1;
    while(n > 0){
        if(n % 2 == 0){
            n /= 2;
            x *= x;
        }else{
            ans *= x;
            n -= 1;
        }
    }
    return ans;
}
int main()
{   
    // built in function 
    // user defined function
    int x = 3, n = 10;
    
    cout<<pow(x, n);
    return 0;
}