#include<bits/stdc++.h>
using namespace std;

int firstRepeatingNumberMinIndex(vector<int> arr, int n){
    int minIdx = INT_MAX;
    const int N = 1e6+2;

    vector<int> idx(N,-1);

    for(int i=0; i<n; i++){
        if(idx[arr[i]] != -1){
            minIdx = min(minIdx, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }
    return (minIdx==INT_MAX) ? -1 : minIdx;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<firstRepeatingNumberMinIndex(arr,n);
}