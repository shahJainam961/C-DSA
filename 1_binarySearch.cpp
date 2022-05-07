#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int key){
    int index=-1;
    int l = 0;
    int r = n-1;
    int m;
    while(l<=r){
        m = l + (r-l)/2;
        if(arr[m] == key){
            index = m;
            break;
        }
        else if(arr[m] > key){
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    return index;
}


int main(){
    int n;
    cin>>n;
    int sortedArr[n];
    for(int i=0;i<n;i++){
        cin>>sortedArr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(sortedArr,n,key);
}