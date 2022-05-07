#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[],int n){
    bool isSwap;
    for(int i=0; i<n-1; i++){
        isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr,j,j+1);
                isSwap = true;
            }
        }
        if(!isSwap) break;
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    for(int a : arr){
        cout<<a<<" ";
    }
}