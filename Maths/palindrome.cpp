/* 
Palindrome is a number which read same from front or back
eg. 121, 1221, 1111 are palindrome
122, 23, 5354 are not palindrome

naman
racecar
*/
/*
 
 Aramstrong number
 153 
 1*1*1 + 5*5*5 + 3*3*3 = 153
 1 + 125 + 27 = 153
 332


 %

 153 / 10 = 15
 0 + 3*3*3 + 5*5*5 + 1*1*1

*/

#include<iostream>
using namespace std;
bool isArmstrongNumber(int n){
    int total = 0;
    int check = n;
    while(n > 0){
        int reminder = n % 10;
        total += reminder*reminder*reminder;    // pow(reminder, 3);
        n /= 10;
    }
    if(check == total) cout<<"Aramstrong nuber";
    else cout<<"Not aramstrong";
}
bool isPalindrome(int n){
    // 233 --- 332
    int check = n;
    int number = 0;
    /*
     rem    number      n
     0      0           233
     3      0*10+3=3    23
     3      3*10 + 3 = 33   2
     2      33*10+2 = 332   0
    

    1. number = 0
    2. number ko 10 se multiple +  me reminder add karna suru kia 
    3. check kiya jo number bana hai vo input ke equal 

    check if number is palindrome or not
    print reverse of a number
    */
    while(n > 0){
        int reminder = n % 10;
        number = (number * 10) + reminder;
        n /= 10;
    }
    return check == number;
}
int main()
{   
    int num;
    cout<<"Enter number : ";
    cin>>num;
    if(isPalindrome(num)){
        cout<<"Palindrome number";
    }else{
        cout<<"Not palindrome";
    }
    return 0;
}