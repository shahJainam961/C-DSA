#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestArithmeticSubarray(vector<int> arr, int n){
    if(arr.size()==0 || arr.size() == 1 || arr.size() == 2) return arr.size();

    int prevDiff = arr[1] - arr[0];
    int curr = 2;
    int result = 2;
    for(int i=2; i<=n; i++){
        if(arr[i] - arr[i-1] == prevDiff){
            curr++;
        }
        else{
            prevDiff = arr[i] - arr[i-1];
            curr = 2;
        }
        result = max(result, curr);
    }

    return result;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<longestArithmeticSubarray(arr,n);
}