#include<iostream>
#include<string>        // String header file
using namespace std;
/**
Make a form containing following fields
form
first name
last name
rool no.
subject
cgpa
*/
int main()
{
    // hard code :- To put value of variable directly.
    // Dynamic valur :- user input 
    string firstName = "Sahil" , lastName = "Jain";
    
    // We can only use + operator in string
    string fullName = firstName + lastName; // String concatination 
    string subject = "CSE";

    int rooNo = 93;
    float cgpa = 8.99;
    int sizeOfFullName = size(fullName);    // fullName.size();

    cout<<"First Name : "<<firstName<<"\n";
    cout<<"Last Name : "<<lastName<<"\n";
    cout<<"Full Name : "<<fullName<<" ";
    cout<<"Size of full name : "<<sizeOfFullName;

    // Access string 
    firstName[1] = 'o';
    firstName[2] = 't';

    // String function
    firstName.size();   // --> size return the lenght of vari
    firstName.pop_back();   // --> delete last ele
    firstName.push_back('n');   // --> insert ele in last position

    cout<<firstName<<endl;

    // Program
    // your password should be minmum of 8 chracter
    string pass = "jain12345";
    int len = pass.size();
    cout<<"size of enroll is : "<<len<<endl;
    if(len >= 8){
        cout<<"Valid pass"<<endl;
    }else{
        cout<<"password must be of atlest 8 char"<<endl;
    }
    return 0;
}

