#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[] , int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while (prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev-- ;
        }
        arr[prev+1] = curr;
    }
}

void printArray(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}

int main(){
    int n=5;
    int arr[] = {2,5,1,7,3};
    insertionSort(arr ,n);
    printArray(arr,n);
    return 0;
}