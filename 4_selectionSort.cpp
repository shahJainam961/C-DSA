#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionSort(int arr[],int n){
    int min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(arr[min] > arr[j]) min = j;
        }
        if(min != i) swap(arr,min,i);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr, n);
    for(int a : arr){
        cout<<a<<" ";
    }
}