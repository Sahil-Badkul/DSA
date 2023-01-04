#include<iostream>
using namespace std;
// take a input from user until he enter 5 and tell count after which he enter 5
// 3 6 6 7 45  756 5
// count 7
// loop 
// for, while, do while
int main(){
    int count = 0;
    int password = 9898;

    while(true){
        int input;
        cout<<"Enter ur password"<<endl;
        cin>>input;
        if(password == input){
            cout<<"Screen lock";
            break;
        }else{
            cout<<"try again"<<endl;
        }
        count++;
    }

    cout<<"You enter right password in "<<count<<" times"<<endl;
}