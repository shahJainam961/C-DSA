#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> sumOfAllSubarrays(int arr[], int n){
    vector<int> result;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            result.push_back(sum);
        }
    }
    return result;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = sumOfAllSubarrays(arr,n);
    for(int i : result){
        cout<<i<<" ";
    }
}