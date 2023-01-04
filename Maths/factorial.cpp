/*
    Factorial of n is 1*2*3....(n-2)*(n-1)*n.
    Factorial of 5 is 120. 1*2*3*4*5 = 120 
    0 - 1
    1 - 1
    2 - 2
    3 - 6
    4 - 24
    5 - 120
    ...
    5 * 4 * 3 * 2 * 1!
*/
#include<iostream>
using namespace std;
// recursive solution
int Factorial(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}
int main()
{
    int n = 5;
    int fact = 1;
    // for(int i = 1; i <= n; i++){
    //     fact = fact * i;
    // }
    cout<<Factorial(n);
    return 0;
}