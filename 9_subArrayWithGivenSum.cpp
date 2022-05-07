#include<bits/stdc++.h>
using namespace std;

pair<int,int> subArrayWithGivenSum(vector<int> arr, int n, int sum){
    int start=0;
    int end=0;
    int testSum=0;

    while(end<n && testSum+arr[end]<=sum){
        testSum += arr[end];
        end++;
    }
    if(sum ==  testSum){
        pair<int,int> result = make_pair(start,end);
        return result;
    }
    while(start<n && testSum-arr[start]>=sum){
        start++;
    }
    if(sum ==  testSum){
        pair<int,int> result = make_pair(start,end);
        return result;
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