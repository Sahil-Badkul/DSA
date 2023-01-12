#include<bits/stdc++.h>
using namespace std;
int freq(int arr[], int n, int key){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            count += 1;
        }
    }
    return count;
}
int main()
{
    int arr[] = {10, 10, 10, 23, 23, 4, 4, 5, 3};    
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 1, fre = 1;
    while(i < n){
        while(i < n && arr[i] == arr[i-1]){
            fre++;
            i++;
        }
        cout<<"Freq of "<< arr[i]<<" is "<< fre<<endl;;
        i++;
        fre = 1;
    }
    if(n == 1 || arr[n-1] != arr[n-2]){
        cout<<"Freq of "<< arr[n-1]<<" is "<< 1;
    }
    return 0;
}
/*
for(int i = 0; i < n; i++){
    cout<<"Freq of "<<arr[i]<<" : "<<freq(arr, n, arr[i])<<endl;
}
*/