#include<bits/stdc++.h>
using namespace std;

/*
You are given an array arr[]ofNintegers including 0. The task is to find the smallest
positive number missing from the array.
*/

int abs(int i){
    return (i<0)?-i:i;
}

int smallestPositiveMissingNumber(vector<int> arr, int n){
    bool one = false;
    for(int a : arr){
        if(a == 1){
            one = true;
            break;
        }
    }
    if(one == false) return 1;
    
    for(int i=0; i<n; i++){
        if(arr[i]<=0 || arr[i]>n){
            arr[i] =  1;
        }
    }

    for(int i=0; i<n ;i++){
        if(arr[abs(arr[i])-1] < 0) continue;
        arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
    }

    for(int i=0; i<n ;i++){
        if(arr[i] > 0) return i+1;
    }

    return n+1;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<smallestPositiveMissingNumber(arr,n);
}