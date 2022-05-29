#include<bits/stdc++.h>
using namespace std;

/*
Max Sum SubArray Kadane's Algo  -> Circular max sumSubarray stilldoubt
*/


int maxSumSubArray(vector<int> arr, int n){
    if(n==0) return 0;
    int best_sum = arr[0];
    int curr_sum = arr[0];

    for(int i=1; i<n; i++){
        curr_sum = max(curr_sum+arr[i], arr[i]);
        best_sum = max(curr_sum, best_sum);
    }
    // for(int i=0; i<n; i++){
    //     curr_sum = max(curr_sum+arr[i], arr[i]);
    //     best_sum = max(curr_sum, best_sum);
    // }
    

    return best_sum;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSumSubArray(arr,n);
}