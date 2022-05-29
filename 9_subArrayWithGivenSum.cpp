#include<bits/stdc++.h>
using namespace std;

/*
Given an unsorted array A of size N of non-negative integers,find a continuous subarray
which adds to a given number S.
*/

pair<int,int> subArrayWithGivenSum(vector<int> arr, int n, int sum){
    if(n==0) return {-1,-1};
    int start=0;
    int end=0;
    int testSum=0;

    while(testSum + arr[end] <= sum && end < n){
        testSum += arr[end];
        end++;
    }

    if(testSum == sum) return {start, end-1};

    while(end < n){
        testSum += arr[end];
        while(testSum > sum){
            testSum -= arr[start];
            start++;
        }
        if(testSum == sum) return {start,end};
        end++;
    }
    
    return {-1,-1};
    
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout<<subArrayWithGivenSum(arr,n,sum).first<<","<<subArrayWithGivenSum(arr,n,sum).second;
}