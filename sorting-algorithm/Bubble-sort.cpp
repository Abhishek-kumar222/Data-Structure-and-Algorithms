#include <bits/stdc++.h>
using namespace std;
   
 void BubbleSort(int *arr , int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
 }

 void printarr( int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" , ";
    }
 }

int main() {
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    BubbleSort(arr , n);
    printarr(arr , n);

    return 0;
}