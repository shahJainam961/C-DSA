#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
An arithmetic array is an array that contains at least two integers and the differences
between consecutive integers are equal.For example,[9,10],[3,3,3],and[9,7,5,3]are
arithmetic arrays,while[1,3,3,7],[2,1,2],and[1,2,4]are not arithmetic arrays.

Sarasvati has an array of N non-negative integers.The i-th integer of the array is A. She
wants to chooseacontiguous arithmetic subarray from her array that has the maximum
length.Please help her to determine the length of the longest contiguous arithmetic
subarray.
*/


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