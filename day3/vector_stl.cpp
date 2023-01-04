#include<bits/stdc++.h>

using namespace std;
/**
form
first name
last name
rool no.
subject
cgpa
*/
int main()
{
    // hard code, user input -- dynamic
    string firstName = "Sahil" , lastName = "Jain";
    string fullName = firstName + lastName;
    string subject = "CSE";
    int rooNo = 93;
    float cgpa = 8.99;
    int sizeOfFullName = size(fullName);    // fullName.size();

    cout<<"First Name : "<<firstName<<"\n";
    cout<<"Last Name : "<<lastName<<"\n";
    cout<<"Full Name : "<<fullName<<" ";
    cout<<"Size of full name : "<<sizeOfFullName;
    firstName[1] = 'o';
    firstName[2] = 't';
    firstName.size();   // --> size return the lenght of vari
    firstName.pop_back();   // --> delete last ele
    firstName.push_back('n');   // --> insert ele in last position
    cout<<firstName<<endl;

    // your password should be minmum of 8 chracter
    string pass = "jain12345";
    int len = pass.size();
    cout<<"size of enroll is : "<<len<<endl;
    if(len >= 8){
        cout<<"should be a valid pass"<<endl;
    }else{
        cout<<"pass must be of atlest 8 char"<<endl;
    }
    return 0;
}

