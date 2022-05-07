#include<bits/stdc++.h>
using namespace std;

int recordBreakingDays(vector<int> arr, int n){
   int maxi = INT_MIN;
   int result = 0;

   for(int i=0; i<n; i++){
        if(i==0 && arr[i] > arr[i+1]) result++;
        else if(arr[i] > maxi && arr[i] > arr[i+1]) result++;
        maxi = max(maxi, arr[i]);
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
    cout<<recordBreakingDays(arr,n);
}