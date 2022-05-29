#include<bits/stdc++.h>
using namespace std;


/*
Isyana is given the number of visitors at her local theme park onNconsecutive days.The
number of visitors on thei-th day is V₁.Aday is record breaking if it satisfies both of the
following conditions:
    The number of visitors on the day is strictly larger than the number of visitors on each
    of the previous days.
    Either it is the last day,or the number of visitors on the day is strictly larger than the
    number of visitors on the following day.
Note that the very first day could bearecord breaking day!
Please help Isyana find out the number of record breaking days.
*/

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